#include<iostream>
using namespace std;

int reverseNum(int n){
    int reversed = 0;
    while(n > 0){
        reversed = reversed* (10) + (n % 10);
        n /= 10;
    }
    return reversed;
}

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int reverse = reverseNum(n);
    (reverse == n) ? cout << "Palindrome" << endl : cout << "Not a Palindrome" << endl;  
    return 0;
}