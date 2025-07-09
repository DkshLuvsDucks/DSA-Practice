#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[100];
    strcpy(str,"Hello World!");
    cout << str << endl;
    strcat(str," Test String...");
    cout << str << endl;
    cout << strcmp("HELLOWORLD", "helloworld") << endl;
    /*
    equal = 0
    lexicographical bigger = +ve
    lexicographical smaller = -ve
    */
    return 0;
}