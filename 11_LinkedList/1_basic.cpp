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

    void insert(int val, int pos){
        Node* newNode = new Node(val); //dynamic allocation
        Node* temp = head;
        int i = 1;
        for(int i=0; i<pos-1; i++){
            if(temp == NULL){
                cout << "INVALID POSITION!" << endl;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void search(int val){
        Node* temp = head;
        int i=0;
        while(temp!=NULL){
            if(temp->data == val){  
                cout << val << " found at idx: " << i << endl;
                return;
            }
            temp = temp->next;
            i++;
        }
        cout << "element " << val << " not found..." << endl;
    }

    int helper_search(Node* node, int key){
        if(node == NULL){
            return -1;
        }
        if(node->data == key){
            return 0;
        }
        int idx = helper_search(node->next, key);
        if(idx == -1){
            return -1;
        } else {
            return idx + 1;
        }
    }
    
    void search_recursive(int key){
        int idx = helper_search(head, key);
        if(idx == -1){
            cout << "element " << key << " not found..." << endl;
        } else {
            cout << key << " found at idx: " << idx << endl;
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

    int get_size(){
        Node* curr = head;
        int size = 0;
        while(curr != NULL){
            size++;
            curr = curr->next;
        }
        return size;
    }

    void remove_Nth_from_last(int n){
        Node* prev = head;
        int size = get_size();
        for(int i=0; i<(size-n-1); i++){
            prev = prev->next;

        }
        Node* toDel = prev->next;
        cout << "deleting : " << toDel->data << endl;
        prev->next = prev->next->next; 
    }
};

int main(){
    List ll;
    
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.print();
    
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.print();
    
    ll.insert(100, 2);
    ll.print();
    
    ll.pop_front();
    ll.pop_front();
    ll.print();
    
    ll.pop_back();
    ll.pop_back();
    ll.print();
    
    ll.search(100);
    ll.search(101); 
    ll.search_recursive(100);
    ll.search_recursive(101); 

    ll.reverse();
    ll.print();

    ll.remove_Nth_from_last(2);
    ll.print();
    return 0;
}