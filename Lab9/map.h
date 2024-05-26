#include <iostream>
#include <stack>
#include <tuple>

template <typename Key, typename Value>
class Map {
private:
    private:
    struct Node {
        Key key;
        Value value;
        Node* left;
        Node* right;
        
        Node(const Key& k, const Value& v) : key(k), value(v), left(nullptr), right(nullptr) {}
    };
    
    Node* root;

    // Private helper functions
    Value& findOrCreate(Node*& node, const Key& key) {
        if (node == nullptr) {
            node = new Node(key, Value());
            return node->value;
        }
        
        if (key < node->key)
            return findOrCreate(node->left, key);
        else if (key > node->key)
            return findOrCreate(node->right, key);
        else
            return node->value;
    }

    bool find(Node* node, const Key& key, Value& value) const {
        if (node == nullptr)
            return false;
        
        if (key < node->key)
            return find(node->left, key, value);
        else if (key > node->key)
            return find(node->right, key, value);
        else {
            value = node->value;
            return true;
        }
    }

    int count(Node* node) const {
        if (node == nullptr)
            return 0;
        return 1 + count(node->left) + count(node->right);
    }

    void clear(Node* node) {
        if (node) {
            clear(node->left);
            clear(node->right);
            delete node;
        }
    }

    bool deleteNode(Node*& node, const Key& key) {
        if (node == nullptr)
            return false;
        
        if (key < node->key)
            return deleteNode(node->left, key);
        else if (key > node->key)
            return deleteNode(node->right, key);
        else {
            if (node->left == nullptr && node->right == nullptr) {
                delete node;
                node = nullptr;
            } else if (node->left == nullptr) {
                Node* temp = node;
                node = node->right;
                delete temp;
            } else if (node->right == nullptr) {
                Node* temp = node;
                node = node->left;
                delete temp;
            } else {
                Node* minRight = node->right;
                while (minRight->left != nullptr)
                    minRight = minRight->left;
                node->key = minRight->key;
                node->value = minRight->value;
                deleteNode(node->right, minRight->key);
            }
            return true;
        }
    }

    bool includes(Node* node, const Map<Key, Value>& otherMap) const {
        if (otherMap.root == nullptr)
            return true;
        if (node == nullptr)
            return false;
        Value value;
        if (find(node, otherMap.root->key, value)) {
            if (value != otherMap.root->value)
                return false;
            return includes(node->left, otherMap) && includes(node->right, otherMap);
        }
        return false;
    }

public:
    Map() : root(nullptr) {}
    
    ~Map() {
        clear(root);
    }

    // Overload [] operator
    Value& operator[](const Key& key) {
        return findOrCreate(root, key);
    }

    // Set method
    void Set(const Key& key, const Value& value) {
        findOrCreate(root, key) = value;
    }

    // Get method
    bool Get(const Key& key, Value& value) const {
        return find(root, key, value);
    }

    // Count method
    int Count() const {
        return count(root);
    }

    // Clear method
    void Clear() {
        clear(root);
        root = nullptr;
    }

    // Delete method
    bool Delete(const Key& key) {
        return deleteNode(root, key);
    }

    // Includes method
    bool Includes(const Map<Key, Value>& map) const {
        return includes(root, map);
    }

    // Iterator class with index tracking
    class Iterator {
    private:
        Node* current;
        std::stack<Node*> stack;
        int index;

        void pushLeft(Node* node) {
            while (node) {
                stack.push(node);
                node = node->left;
            }
        }

    public:
        Iterator(Node* root) : current(nullptr), index(-1) {
            pushLeft(root);
            ++(*this);  // Move to the first element
        }

        std::tuple<Key, Value, int> operator*() const {
            return {current->key, current->value, index};
        }

        Iterator& operator++() {
            if (!stack.empty()) {
                current = stack.top();
                stack.pop();
                pushLeft(current->right);
                ++index;
            } else {
                current = nullptr;
            }
            return *this;
        }

        bool operator!=(const Iterator& other) const {
            return current != other.current || !stack.empty() != !other.stack.empty();
        }
    };

    // begin() and end() methods
    Iterator begin() const {
        return Iterator(root);
    }

    Iterator end() const {
        return Iterator(nullptr);
    }
};