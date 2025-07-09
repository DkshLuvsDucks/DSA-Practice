#include<iostream>
using namespace std;

char getNext(char ch){
    if(ch == 'z' || ch == 'Z'){
        return (ch == 'z') ? 'a' : 'A';
    }
    return ch + 1;
}

int main(){
    char ch;
    cout << "Enter character: ";
    cin >> ch;
    cout << "Next Character : " << getNext(ch);
    return 0;
}