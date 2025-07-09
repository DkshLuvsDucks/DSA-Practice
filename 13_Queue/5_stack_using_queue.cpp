#include<iostream>
#include<queue>
using namespace std;

class Stack{
private:
    queue<int> q1;
    queue<int> q2;
    
public:
    void push(int val){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(val);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }

    void pop(){
        if(q1.empty()){
            cout << "stack is empty..." << endl;
            return;
        }
        q1.pop();
    }

    void top(){
        if(q1.empty()){
            cout << "stack is empty..." << endl;
            return;
        }
        cout << q1.front() << endl;
    }

    bool empty(){
        return q1.empty();
    }
};


int main(){
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    while(!s1.empty()){
        s1.top();
        s1.pop();
    }
    
    return 0;
}