#include<iostream>
using namespace std;

int sumDigits(int n){
    int sum = 0;
    while(n>0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){ 
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << "Sum of digits = " << sumDigits(n) << endl;
    return 0;
}