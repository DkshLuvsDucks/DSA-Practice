#include<iostream>
#include<string.h>
using namespace std;

bool isValidPalindrome(char *str, int size){
    int start = 0, end = size - 1;
    while(start <= end){
        if(str[start++] != str[end--]){
            return false;
        }
    }
    return true;
}

int main(){
    char str[] = "racecar";
    int  len = strlen(str);
    if(isValidPalindrome(str,len)){
        cout << "\""<< str << "\" is a valid palindrome..." << endl;
    } else{
        cout << "Not a valid palindrome..." << endl;
    }
    return 0;
}