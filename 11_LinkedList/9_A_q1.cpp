#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Function to get length of a linked list
int getLength(Node* head) {
    int len = 0;
    while(head) {
        len++;
        head = head->next;
    }
    return len;
}

// Function to get intersection node
Node* getIntersection(Node* head1, Node* head2) {
    int len1 = getLength(head1);
    int len2 = getLength(head2);

    // Advance the longer list
    int diff = abs(len1 - len2);
    Node* longer = len1 > len2 ? head1 : head2;
    Node* shorter = len1 > len2 ? head2 : head1;

    while(diff--) {
        longer = longer->next;
    }

    // Move both together and check for intersection
    while(longer && shorter) {
        if(longer == shorter) return longer;
        longer = longer->next;
        shorter = shorter->next;
    }

    return nullptr; // No intersection
}

int main() {

    Node* common = new Node(6);
    common->next = new Node(7);

    // List 1: 1 -> 2 -> 3 -> 6 -> 7
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = common;

    // List 2: 4 -> 5 -> 6 -> 7
    Node* head2 = new Node(4);
    head2->next = new Node(5);
    head2->next->next = common;

    Node* intersection = getIntersection(head1, head2);
    if(intersection)
        cout << "Intersection at node with data = " << intersection->data << endl;
    else
        cout << "No intersection found." << endl;

    return 0;
}
