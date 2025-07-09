#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }

};

class Queue{
private:
    Node* head;
    Node* tail;

public:
    Queue(){
        head = tail = nullptr;
    }

    void push(int val){
        Node* newNode = new Node(val);
        if(isEmpty()){
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop(){
        if(isEmpty()){
            cout << "no element to pop..." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        cout << "popped element = " << temp->data << endl;
        delete temp;
    }

    bool isEmpty(){
        return head == nullptr;
    }

    void print(){
        Node* curr = head;
        while(curr){
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }

    void front(){
        if(isEmpty()){
            cout << "no element at front..." << endl;
            return;
        }
        cout << "front : " << head->data << endl;
    }

};

int main(){
    Queue q1;
    cout << "Pushing 1, 2, 3, 4 into queue:\n";
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.print();

    cout << "Popping 2 elements:\n";
    q1.pop();
    q1.pop();
    q1.print();

    cout << "Pushing 5, 6:\n";
    q1.push(5);
    q1.push(6);
    q1.print();

    cout << "Popping all remaining elements:\n";
    while(!q1.isEmpty()){
        q1.pop();
    }

    cout << "Trying to pop from empty queue:\n";
    q1.pop();

    cout << "Pushing again after emptying queue:\n";
    q1.push(10);
    q1.push(20);
    q1.print();
      
    return 0;
}