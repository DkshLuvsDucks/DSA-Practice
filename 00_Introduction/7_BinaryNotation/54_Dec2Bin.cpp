#include<iostream>
using namespace std;

void dec2bin (int n){
    int pow = 1;
    int binNum = 0;
    while(n>0){
        int remainder = n % 2;
        binNum += remainder * pow;
        n /= 2;
        pow *= 10;
    }
    cout << "Binary Number = " << binNum << endl;    
}

int main(){
    int n;
    cout << "Enter Decimal Number: ";
    cin >> n;
    dec2bin(n);
    return 0;
}