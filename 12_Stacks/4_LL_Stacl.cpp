#include<iostream>
using namespace std;

template<class T>
class Node{
public:
    T data;
    Node* next;

    Node(T val){
        data = val;
        next = NULL;
    }
};

template<class T>
class Stack{
Node<T>* head;
int size;
public:
    Stack(){
        head = NULL;
        size = 0;
    }
    
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }

    bool isEmpty(){
        return head == NULL;
    }

    void push(T val){
        Node<T>* newNode = new Node<T>(val);
        if(head == NULL) head = newNode;
        else{
            newNode->next = head;
            head = newNode;
        }
        size++;
    }

    void pop(){
        if(isEmpty()){
            cout << "underflow..." << endl;
            return;
        }
        Node<T>* temp = head
        head = head->next;
        temp->next = NULL;
        delete temp;
        size--;
    }

    void top(){
        if(isEmpty()){
            cout << "underflow..." << endl;
            return;
        }
        cout << "element at top = " << head->data << endl;
    }

    void getSize(){
        cout << "size of stack = " << size << endl;
    }

};

int main(){
    Stack<int> s1;
    s1.push(3);
    s1.push(2);
    s1.push(1);
    s1.getSize();

    while(!s1.isEmpty()){
        s1.top();
        s1.pop();
    }

    Stack<char> s2;
    s2.push('c');
    s2.getSize();
    s2.push('b');
    s2.push('a');
    s2.getSize();

    while(!s2.isEmpty()){
        s2.top();
        s2.pop();
    }
    
    
    return 0;
}