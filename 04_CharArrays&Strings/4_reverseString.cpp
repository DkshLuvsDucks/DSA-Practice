#include<iostream>
#include<string.h>
using namespace std;

void reverseStr(char *str, int size){
    int start = 0, end = size - 1;
    while(start <= end){
        swap(str[start++], str[end--]);
    }
}

int main(){
    char str[] = "daksh loves ducks";
    int  len = strlen(str);
    cout << "Before Reversing:\n";
    cout << str << "\n";
    reverseStr(str, len);
    cout << "\nAfter Reversing:\n";
    cout << str << "\n";
    return 0;
}