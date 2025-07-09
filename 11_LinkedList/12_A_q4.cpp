#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void push_back(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

void print(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

Node* reorderEvenOdd(Node* head) {
    if (!head) return NULL;

    Node *evenHead = NULL, *evenTail = NULL;
    Node *oddHead = NULL, *oddTail = NULL;

    Node* curr = head;

    while (curr) {
        if (curr->data % 2 == 0) {
            if (!evenHead) {
                evenHead = evenTail = curr;
            } else {
                evenTail->next = curr;
                evenTail = curr;
            }
        } else {
            if (!oddHead) {
                oddHead = oddTail = curr;
            } else {
                oddTail->next = curr;
                oddTail = curr;
            }
        }
        curr = curr->next;
    }

    // Combine even and odd lists
    if (evenTail) evenTail->next = oddHead;
    if (oddTail) oddTail->next = NULL;

    return evenHead ? evenHead : oddHead;
}

int main() {
    Node* head = NULL;

    push_back(head, 8);
    push_back(head, 12);
    push_back(head, 10);
    push_back(head, 5);
    push_back(head, 4);
    push_back(head, 1);
    push_back(head, 6);

    cout << "Original List:\n";
    print(head);

    head = reorderEvenOdd(head);

    cout << "Reordered List (Even before Odd):\n";
    print(head);

    return 0;
}