#include<iostream>
#include <string.h>
using namespace std;

int main(){
    char ch1 = 'a';
    char ch2 = 'A';

    cout << ch1 << " = " << (int) ch1 << endl;
    cout << ch2 << " = " << (int) ch2 << endl;
    cout << ch1 + 1 << " = " << (char) 98 << endl;
    cout << ch2 + 1 << " = " << (char) 66 << endl;

    char arr1[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << arr1 << endl;
    char arr2[5] = {'c', 'o', 'd', 'e', '\0'}; //end of string character '\0'
    cout << arr2 << endl;
    
    char arr3[] = "hello world";
    cout << arr3 << endl;
    cout << strlen(arr3) << endl;
    return 0;
}