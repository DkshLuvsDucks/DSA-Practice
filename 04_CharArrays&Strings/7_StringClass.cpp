#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1 = "hello";
    string str2 = " world";
    string str3 = str1 + str2;
    cout << str3 << endl;
    str3 += "!";
    cout << str3 << endl;
    string str4;
    getline(cin,str4);
    cout << str4 << endl;
    cout << str4[0] << endl;
    cout << str4[1] << endl;
    cout << str4[2] << endl;
    cout << str4[3] << endl;
    cout << str4[4] << endl;
    cout << (str1 == str2) << endl;
    cout << (str1 > str2) << endl;
    cout << (str1 < str2) << endl;
    return 0;
}