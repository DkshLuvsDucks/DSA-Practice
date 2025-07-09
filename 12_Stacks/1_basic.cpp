#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> vec;
public:
    void push(int val){

        vec.push_back(val);
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack Underflow..." << endl;
            return;
        }
        vec.pop_back();
    }

    int top(){
        if(isEmpty()){
            cout << "No element in stack..." << endl;
            return -1;
        }
        int lastIdx = vec.size() - 1;
        cout << "element at top = " << vec.at(lastIdx) << endl;
        return vec.at(lastIdx);
    }

    bool isEmpty(){
        return vec.size() == 0;
    }
};

int main(){
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    while(!s1.isEmpty()){
        s1.top();
        s1.pop();
    }

    return 0;
}