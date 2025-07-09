#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "hello, how are you?";

    //normal way
    for(int i = 0; i < str.length(); i++){
        cout << str[i] << "-";
    }
    cout << endl;

    //for each
    for (char ch: str){
        cout << ch << "-";
    }
    cout << endl;
    return 0;
}