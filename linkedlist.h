#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node {
public:
    int value = 0;
    Node *next = nullptr;
};

class LinkedList {
private:
    int nodeCount = 0;
    Node *lastNode = nullptr;
public:
    Node *firstNode = nullptr;
    int size();
    Node* add();
    Node* splice(int index);
    Node* get_last();
    Node* get(int index);
};

#endif