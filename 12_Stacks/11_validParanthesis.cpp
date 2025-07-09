#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool validParanthesis(string str){
    stack<char> s;
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        if(ch == '{' || ch == '[' || ch == '('){
            s.push(ch);
        } else {
            if(s.empty()){
                return false;
            }
            // match
            char top = s.top();
            if ((ch == '}' && top == '{') ||
                (ch == ']' && s.top() == '[') || 
                (ch == ')' && s.top() == '(')) {
                s.pop();
            } else {
                return false;
            }
        }
    }
    return s.empty();
}

int main(){
    string s1 = "([}])";
    string s2 = "{[()]}";
    
    validParanthesis(s1) ? cout << "valid\n" : cout << "invalid\n" ;
    validParanthesis(s2) ? cout << "valid\n" : cout << "invalid\n" ;
    
    return 0;
}