#include<iostream>
using namespace std;

int main(){
    string str = "Hello World!";
    cout << str.length() << endl;
    cout << str.at(1) << endl;
    cout << str.substr(0,2) << endl;
    cout << str.find("W") << endl;//returns -1 if it doesnt exist
    return 0;
}