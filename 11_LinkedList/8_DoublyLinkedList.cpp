#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = nullptr;
    }
};

class DLL{
public:
    Node* head;
    Node* tail;

    DLL(){
        head = tail = nullptr;
    }

    ~DLL(){
        Node* curr = head;
        while(curr){
            Node* nextNode = curr->next;
            delete curr;
            curr = nextNode;
        }
    }


    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==nullptr){
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==nullptr){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head==nullptr){
            cout << "No element to pop..." << endl;
            return;
        } else {
            Node* temp = head;
            head = head->next;
            if(head != nullptr){
                head->prev = nullptr;
            }
            temp->next = nullptr;
            delete temp;
        }
    }

    void pop_back(){
        if(head==nullptr){
            cout << "No element to pop..." << endl;
            return;
        } else if (head == tail){
            delete head;
            head = tail = nullptr;
        }
        else{
            Node* temp = tail;
            tail = tail->prev;
            tail->next = nullptr;
            temp->prev = nullptr;
            delete temp;

        }
    }

    void print(){
        if(head == nullptr){
            cout << "No element in list..." << endl;
            return;
        }
        Node* curr = head;
        cout << "NULL <=> ";
        while(curr){
            cout << curr->data << " <=> ";
            curr = curr->next;
        }
        cout << "NULL" << endl;
    }
};


int main(){
    DLL dl;
    dl.push_back(10);
    dl.push_back(20);
    dl.push_back(30);
    dl.print();

    dl.pop_front();
    dl.print();

    dl.pop_back();
    dl.print();

    dl.pop_back();
    dl.print();

    dl.pop_back();
    return 0;
}