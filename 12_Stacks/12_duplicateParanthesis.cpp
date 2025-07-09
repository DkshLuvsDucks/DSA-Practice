#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool duplicateParanthesis(string str){
    stack<char> s;
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        if(ch != ')'){
            s.push(ch);
        } else {
            if(s.top()=='('){
                return true; // Duplicate
            }
            while(s.top() != '('){
                s.pop();
            }
            s.pop();
        }
    }
    return false;
}

int main(){
    string s1 = "((a+b)+((c)))";
    string s2 = "((a+b)+(c+d))";
    
    duplicateParanthesis(s1) ? cout << "duplicate\n" : cout << "not duplicate\n" ;
    duplicateParanthesis(s2) ? cout << "duplicate\n" : cout << "not duplicate\n" ;
    
    return 0;
}