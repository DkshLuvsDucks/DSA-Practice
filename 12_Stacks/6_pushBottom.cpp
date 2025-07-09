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

int main(){
    stack<int> s;
    for(int i=1; i<=5; i++){
        s.push(i);
    }

    push_at_bottom(s, 0);
    
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}