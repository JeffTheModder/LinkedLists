#include <iostream>
#include "linkedlist.h"

int main(int argc, char **argv) {
    LinkedList ll;
    Node* n0 = ll.add();
    Node* n1 = ll.add();
    Node* n2 = ll.add();
    Node* n3 = ll.add();

    n0->value = 1;
    n1->value = 2;
    n2->value = 3;
    n3->value = 4;

    std::cout << ll.size() << std::endl;
    std::cout << ll.get(3)->value << std::endl;

    ll.splice(2);

    std::cout << ll.size() << std::endl;
    std::cout << ll.get(2)->value << std::endl;

    return 0;
}