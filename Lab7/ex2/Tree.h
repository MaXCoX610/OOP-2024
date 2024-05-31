#include <iostream>
#include <stdexcept>
#pragma once
#define MAXCHILDREN 100

template <typename T>
struct Node
{
    T value;
    Node<T> *children[MAXCHILDREN];
    unsigned int nrChildren;

    // Constructor to initialize value and nrChildren
    Node(T value) : value(value), nrChildren(0)
    {
        for (int i = 0; i < MAXCHILDREN; ++i)
        {
            children[i] = nullptr;
        }
    }

    // Default constructor
    Node() : nrChildren(0)
    {
        for (int i = 0; i < MAXCHILDREN; ++i)
        {
            children[i] = nullptr;
        }
    }
};

template <typename T>
class TreeRedone
{
public:
    Node<T> *root;

    // Default constructor initializing root to nullptr
    TreeRedone() : root(nullptr) {}

    // Method to add node to the tree (to set the root or add to a parent)
    void add_node(Node<T> *parent, T value)
    {
        if (parent == nullptr)
        {
            // Setting the root if parent is nullptr
            if (root == nullptr)
            {
                root = new Node<T>(value);
            }
            else
            {
                // Adding a child to the parent node
                if (parent->nrChildren < MAXCHILDREN)
                {
                    parent->children[parent->nrChildren] = new Node<T>(value);
                    parent->nrChildren++;
                }
                else
                {
                    // Handle the case where the parent has maximum children
                    // For now, we'll assume that parent should not exceed MAXCHILDREN
                }
            }
        }
    }
    Node<T> &get_node(Node<T> *parent)
    {
        if (parent == nullptr)
        {
            if (root == nullptr)
            {
                throw std::runtime_error("The tree is empty, and no root node is available.");
            }
            return *root;
        }
        return *parent;
    }

void delete_node(Node<T>* node)
{
    if (node == nullptr) return; // Check for null pointer

    // Delete children nodes
    for(int i = 0; i < node->nrChildren; i++) {
        delete_node(node->children[i]);
    }

    // Delete the current node
    delete node;
}

    void delete_tree()
    {
        if (root != nullptr)
        {
            delete_node(root);
            root = nullptr;
        }
    }

    ~TreeRedone()
    {
        delete_tree();
    }
};