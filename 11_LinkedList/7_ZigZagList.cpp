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
            // cout << "Node destructor for val = " << data << endl;
            delete next;
            next = NULL;
        }
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

    ~List(){
        // cout << "Destructor of list...\n";
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

    void push_front(int val){
        Node* newNode = new Node(val); //dynamic allocation
        if(head == NULL){
            head = tail = newNode;  
        } else {
            newNode->next = head;
            head = newNode;
        }

    }

    void pop_front(){
        if(head==NULL){
            cout << "List is already empty..." << endl;
        }
        Node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
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

    void pop_back(){
        if(head==NULL){
            cout << "List is already empty..." << endl;
            return;
        }
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

};


Node* splitAtMid(Node* head){
    Node *slow, *fast, *prev;
    slow = fast = head;
    prev = NULL;
    while(fast!=NULL && fast->next!=NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if(prev!=NULL){
        prev->next = NULL; // split at middle
    }
    return slow; // right head
}

Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }

    return prev;
}

Node* zigZagLL(Node* head){
    Node* rightHead = splitAtMid(head);
    Node* rightHeadRev = reverse(rightHead);

    // alternate merging
    Node* left = head;
    Node* right = rightHeadRev;
    Node* tail  = right;

    while(left != NULL && right != NULL){
        Node* nextL = left->next;
        Node* nextR = right->next;

        left->next = right;
        right->next = nextL;

        tail = right;

        left = nextL;
        right = nextR;
    }

    if(right!=NULL){
        tail->next = right;
    }

    return head;
}

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);

    ll.print();

    ll.head = zigZagLL(ll.head);

    ll.print();

    return 0;
}