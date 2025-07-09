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

Node* merge(Node* left, Node* right){
    if(!left) return right;
    if(!right) return left;

    Node* result = NULL;

    if(left->data <= right->data){
        result = left;
        result->next = merge(left->next, right);
    } else {
        result = right;
        result->next = merge(left, right->next);
    }
    return result;
}

// Node* merge(Node* left, Node* right){
//     List ans;
//     Node* i = left;
//     Node* j = right;
//     while(i!=NULL && j!=NULL){
//         if(i->data <= j->data){
//             ans.push_back(i->data);
//             i = i->next;
//         } else {
//             ans.push_back(j->data);
//             j = j->next;
//         }
//     }

//     while(i!=NULL){
//         ans.push_back(i->data);
//         i = i->next;
//     }
    
//     while(j!=NULL){
//         ans.push_back(j->data);
//         j = j->next;
//     }

//     return ans.head;
// }

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

Node* mergeSort(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* rightHead = splitAtMid(head);
    Node* left = mergeSort(head);
    Node* right = mergeSort(rightHead);
    return merge(left, right);
}

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);

    ll.print();

    ll.head = mergeSort(ll.head);

    ll.print();

    return 0;
}