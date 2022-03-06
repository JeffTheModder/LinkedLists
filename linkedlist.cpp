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

Node* LinkedList::get(int index) {
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