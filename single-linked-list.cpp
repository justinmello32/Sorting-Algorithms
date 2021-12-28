#include "iostream"

using namespace std;

/* Classes */
class Node {
public: 

int data;
Node* next;
             
};

/* Functions */
void printList(Node* n) {
    while(n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

int main() {

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 34;
    second->next = third;

    third->data = 23;
    third->next = NULL;

    printList(head);

    return 0;
}