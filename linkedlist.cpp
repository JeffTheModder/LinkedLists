#include <iostream>
#include <stdexcept>
#include "linkedlist.h"

int LinkedList::size() {
    return nodeCount;
}

Node* LinkedList::add() {
    if (firstNode == nullptr) {
        firstNode = new Node();
        lastNode = firstNode;
    } else {
        lastNode->next = new Node();
        lastNode = lastNode->next;
    }
    nodeCount++;
    return lastNode;
}

Node* LinkedList::get_last() {
    return lastNode;
}

Node* LinkedList::splice(int index) {
    if (index > nodeCount - 1) {
        throw std::out_of_range("Index out of range");
        return nullptr;
    }

    Node* _node;
    if (index == 0) {
        _node = firstNode;
        firstNode = firstNode->next;
    } else {
        _node = get(index);
        Node* prev = get(index - 1);
        prev->next = _node->next;
    }
    nodeCount--;
    return _node;
};

Node* LinkedList::get(int index) {
    if (index > nodeCount - 1) {
        throw std::out_of_range("Index out of range");
        return nullptr;
    }

    if (index == 0) {
        return firstNode;
    } else {
        Node* node = firstNode;
        for (int i = 0; i < index; i++) {
            node = node->next;
        }
        return node;
    }
}