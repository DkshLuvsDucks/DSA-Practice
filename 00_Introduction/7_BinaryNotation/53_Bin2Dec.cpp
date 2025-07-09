#include<iostream>
using namespace std;

void bin2dec (int bNum){
    int n = bNum;
    int decNum = 0;
    int pow = 1;
    while(n>0){
        int lastDigit = n % 10;
        decNum += lastDigit * pow;
        pow *= 2;
        n /= 10;
    }
    cout << "Decimal Number = " << decNum << endl;
}

int main(){
    int n;
    cout << "Enter Binary Num : ";
    cin >> n;
    bin2dec(n);
    return 0;
}