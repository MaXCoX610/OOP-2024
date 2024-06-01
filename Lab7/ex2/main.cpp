#include "Tree.h"
using namespace std;

bool compareInt(int a, int b) {
    return a == b;
}

const char metoda() {
    return '<';
}

int main() {
    TreeRedone<int> tree;
    tree.add_node(nullptr, 10); // Setting the root node

    Node<int>* rootNode = &tree.get_node(nullptr);  // Should return the root node
    cout << "Root node value: " << rootNode->value << endl;

    tree.add_node(rootNode, 5);  // Adding a child to the root
    tree.add_node(rootNode, 2);
    tree.add_node(rootNode, 3);
    tree.add_node(rootNode->children[0], 4);
    tree.add_node(rootNode->children[1], 5);

    // Find a node with value 4
    int valoare = 4;
    Node<int>* foundNode = tree.find(compareInt, valoare);
    if (foundNode) {
        cout << "Found node with value: " << foundNode->value << endl;
    } else {
        cout << "Node with value " << valoare << " not found" << endl;
    }

    Node<int> cariceps(8);
    tree.insert(&cariceps, rootNode->children[1], 2);
    ///tree.sort(&metoda, rootNode);

    cout << "Children of root node after sorting:" << endl;
    for (unsigned int i = 0; i < rootNode->nrChildren; i++) {
        cout << rootNode->children[i]->value << " ";
    }
    cout << endl;

    return 0;
}
