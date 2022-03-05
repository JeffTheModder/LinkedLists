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

    int size() {
        return nodeCount;
    }

    Node* add() {
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

    Node* get_last() {
        return lastNode;
    }

    Node* get(int index) {
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
};