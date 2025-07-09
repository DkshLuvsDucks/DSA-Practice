#include<iostream>
#include<stack>
#include<string>
using namespace std;

string reverse_string(string str){
    stack<char> s;
    string ans;

    for(int i=0; i<str.size(); i++){
        s.push(str[i]);
    }

    while(!s.empty()){
        char ch = s.top();
        ans += ch;
        s.pop();
    }

    cout << ans << endl;
    return ans;
}

int main(){
    string str = "hello my name is daksh.";
    reverse_string(str);
    return 0;
}