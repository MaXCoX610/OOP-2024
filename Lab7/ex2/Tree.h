#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <functional>
#define MAXCHILDREN 100

template <typename T>
struct Node
{
    T value;
    Node<T> *children[100];
    unsigned int nrChildren = 0;
    Node(T value)
    {
        this->value = value;
        for (int i = 0; i < 100; i++)
        {
            children[i] = nullptr;
        }
    }
    //~Node() {
    //    for (int i = 0; i < this->nrChildren; i++) {
    //        this->children[i]->~Node();
    //    }
    //    this->nrChildren = 0;
    //    //node->~Node();
    //    delete this;
    //}
    Node() {}

    void modifyValue(T value)
    {
        this->value = value;
    }
};
template <class T>
class TreeRedone
{
private:
    Node<T> *root;

public:
    /*Tree<T>() {
        root = nullptr;
    }*/
    TreeRedone<T>()
    {
        root = nullptr;
    }

    void add_node(Node<T> *parent, T value)
    {
        if (parent != nullptr)
        {
            /*if (parent->children < MAXCHILDREN) {

            }*/
            parent->children[parent->nrChildren] = new Node<T>(value);
            parent->nrChildren++;
        }
        else
        {
            root = new Node<T>(value);
        }
    }

    Node<T> &get_node(Node<T> *parent)
    {
        if (parent == nullptr)
        {
            /*int& rootRef = *parent;
            return rootRef;*/
            return *root;
        }
        return *parent;
    }

    void delete_node(Node<T> *node)
    {
        for (int i = 0; i < node->nrChildren; i++)
        {
            delete_node(node->children[i]);
        }
        node->nrChildren = 0;
        delete node;
    }

    Node<T> *find(Node<T> *node, bool (*compare)(T, T), T value)
    {
        if (node == nullptr)
        {
            return nullptr;
        }

        if (compare(node->value, value))
        {
            return node;
        }

        for (unsigned int i = 0; i < node->nrChildren; i++)
        {
            Node<T> *found = find(node->children[i], compare, value);
            if (found != nullptr)
            {
                return found;
            }
        }
        return nullptr;
    }

    Node<T> *find(bool (*compare)(T, T), T value)
    {
        return find(root, compare, value);
    }

    void insert(Node<T> *child, Node<T> *parent, int i)
    {
        if (i >= 0 && i < MAXCHILDREN && parent != nullptr)
        {
            if (parent->children[i] != nullptr)
            {
                for (int j = parent->nrChildren; j > i; --j)
                {
                    parent->children[j] = parent->children[j - 1];
                }
            }
            parent->children[i] = child;
            parent->nrChildren++;
        }
    }

    // void sort(const char (*metoda)(), Node<T> *node)
    // {
    //     char result = metoda();
    //     if (result == '<')
    //     {
    //         for (int i = 0; i < node->nrChildren - 1; i++)
    //         {
    //             int minIndex = i;
    //             for (int j = i + 1; j < node->nrChildren; j++)
    //             {
    //                 if (node->children[j]->value < node->children[minIndex]->value)
    //                 {
    //                     minIndex = j;
    //                 }
    //             }
    //             if (minIndex != i)
    //             {
    //                 swap(node->children[i], node->children[minIndex]);
    //             }
    //         }
    //     }
    //     else if (result == '>')
    //     {
    //         for (int i = 0; i < node->nrChildren - 1; i++)
    //         {
    //             int maxIndex = i;
    //             for (int j = i + 1; j < node->nrChildren; j++)
    //             {
    //                 if (node->children[j]->value > node->children[maxIndex]->value)
    //                 {
    //                     maxIndex = j;
    //                 }
    //             }
    //             if (maxIndex != i)
    //             {
    //                 swap(node->children[i], node->children[maxIndex]);
    //             }
    //         }
    //     }
    // }
};