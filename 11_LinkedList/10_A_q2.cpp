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

Node* removeNodes (Node* head, int m, int n){
    Node* curr = head;
    Node* temp;
    while(curr){
        for(int i=1; i<m && curr!=nullptr; i++){
            curr = curr->next;
        }
        if(curr==nullptr) break;
        temp = curr->next;
        for(int i=0; i<n && temp!=nullptr; i++){
            Node* del = temp;
            temp = temp->next;
            delete del;
        }

        curr->next = temp;
        curr = temp;
    }
    return head;
}

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);
    ll.push_back(8);

    ll.print();

    ll.head = removeNodes(ll.head, 2, 2);

    ll.print();
        
    return 0;
}