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

    ~Node(){
        if(next!=NULL){
            cout << "Node destructor for val = " << data << endl;
            delete next;
            next = NULL;
        }
    }

};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = NULL;
        tail = NULL;
    }

    ~List(){
        cout << "Destructor of list...\n";
        if(head!=NULL){
            delete head;
            head = NULL;
        }
    }

    void print(){
        Node* curr = head;
        while(curr != NULL){
            cout << curr->data << " -> ";
            curr = curr->next;
        }
        cout  << "NULL" << endl;
    }

    void push_back(int val){
        Node* newNode = new Node(val); //dynamic allocation
        if(head == NULL){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void reverse(){
        Node* prev = NULL;
        Node* curr = head;
        while(curr != NULL){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        tail = head;
        head = prev;
    }

    void checkPalindrome(){
        if(!head || !head->next){
            cout << "Valid Palindrome..." << endl;
        }

        // Find mid point
        Node *fast, *slow;
        fast = slow = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        Node *prev = NULL;
        Node *curr = slow;
        while(curr){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // checking first and second half
        Node* first = head;
        Node* second = prev;
        while(second){
            if(first->data != second->data){
                cout << "Invalid Palindrome..." << endl;
                return;
            }
            first = first->next;
            second = second->next;
        }
        cout << "Valid Palindrome..." << endl;
    }

};
int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(3);
    ll.push_back(2);
    ll.push_back(1);
    ll.print();

    ll.checkPalindrome();
    return 0;   
}