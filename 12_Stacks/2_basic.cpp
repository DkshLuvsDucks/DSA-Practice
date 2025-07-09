#include<iostream>
using namespace std;

#define SIZE 10

class Stack{
int arr[SIZE]={0};
int top;

public:
    Stack(){
        top = -1;
    }

    bool isEmpty(){
        return top == -1;
    }

    void push(int val){
        if(top==SIZE-1){
            cout << "overflow..." << endl;
            return;
        }
        arr[++top] = val;
    }

    void pop(){
        if(isEmpty()){
            cout << "underflow..." << endl;
            return;
        }
        cout << "popped val = " << arr[top] << endl;
        top--;
    }

    void peek(){
        if(isEmpty()){
            cout << "underflow..." << endl;
            return;
        }
        cout << "element at top = " << arr[top] << endl;
    }

};

int main(){
    Stack s1;
    s1.push(10);
    s1.push(9);
    s1.push(8);
    s1.push(7);
    s1.push(6);
    s1.push(5);
    s1.push(4);
    s1.push(3);
    s1.push(2);
    s1.push(1);
    s1.push(0);

    while(!s1.isEmpty()){
        s1.peek();
        s1.pop();
    }
    
    return 0;
}