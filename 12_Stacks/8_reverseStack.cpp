#include<iostream>
#include<stack>
using namespace std;

void push_at_bottom(stack<int> &s, int val){
    if(s.size()==0){
        s.push(val);
        return;
    }
    int top = s.top();
    s.pop();
    push_at_bottom(s, val);
    s.push(top);
}

void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    reverseStack(s);
    push_at_bottom(s, temp);
}

void printStack(stack<int> s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main(){
    stack<int> s;
    for(int i=1; i<=5; i++){
        s.push(i);
    }
    cout << "Original Stack:\n";
    printStack(s);
    reverseStack(s);
    
    cout << "Reveresed Stack:\n";
    printStack(s);
    
    return 0;
}