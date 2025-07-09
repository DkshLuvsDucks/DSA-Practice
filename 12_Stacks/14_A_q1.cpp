#include<iostream>
#include<stack>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
public:
    Node* head;
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
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
};

void isPalindrome(Node* head){
    stack<int> s;
    Node* curr = head;
    while(curr){
        s.push(curr->data);
        curr=curr->next;
    }
    curr=head;
    while(curr){
        if(s.top()!=curr->data){
            cout << "not a palindrome\n";
            return;
        }
        curr = curr->next;
        s.pop();
    }
    cout << "palindrome\n";
}


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

    isPalindrome(ll.head);

    return 0;
}