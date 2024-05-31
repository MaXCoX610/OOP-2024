#include "Tree.h"
using namespace std;

int main() {
    TreeRedone<int> tree;
    tree.add_node(nullptr, 10); // Setting the root node

    Node<int> rootNode = tree.get_node(nullptr);  // Should return the root node
    cout << "Root node value: " << rootNode.value << endl;

    tree.add_node(&rootNode, 5);  // Adding a child to the root
    // tree.delete_node(&rootNode);
    return 0;
}