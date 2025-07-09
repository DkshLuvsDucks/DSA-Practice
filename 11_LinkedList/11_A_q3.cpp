#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    // Constructor
    Node(int val){
        data = val;
        next = NULL;
    }
};

int get_size(Node* head){
    Node* curr = head;
    int size = 0;
    while(curr != NULL){
        size++;
        curr = curr->next;
    }
    return size;
}

void print(Node* head){
    Node* curr = head;
    while(curr != NULL){
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout  << "NULL" << endl;
}

void push_back(Node*& head, int val){
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

Node* swapNodesByValue(Node* head, int x, int y) {
    if (x == y) return head;

    Node *prevX = nullptr, *currX = head;
    while (currX && currX->data != x) {
        prevX = currX;
        currX = currX->next;
    }

    Node *prevY = nullptr, *currY = head;
    while (currY && currY->data != y) {
        prevY = currY;
        currY = currY->next;
    }

    if (!currX || !currY) return head; // either x or y not found

    if (prevX) prevX->next = currY;
    else head = currY;

    if (prevY) prevY->next = currX;
    else head = currX;

    Node* temp = currX->next;
    currX->next = currY->next;
    currY->next = temp;

    return head;
}

int main(){
    Node* head = NULL;

    // Create a sample list: 1 -> 2 -> 3 -> 4
    push_back(head, 1);
    push_back(head, 2);
    push_back(head, 3);
    push_back(head, 4);

    cout << "Original List:\n";
    print(head);

    // Swap nodes with values 2 and 4
    head = swapNodesByValue(head, 2, 4);

    cout << "After Swapping 2 and 4:\n";
    print(head);

    return 0;
}