#include<iostream>
using namespace std;

int pow(int num, int n){
    if(n == 0){
        return 1;
    }

    int halfPow = pow(num, n/2);
    int halfPowSquare = halfPow * halfPow;

    if(n%2 != 0){
        return num * halfPowSquare;
    }

    return halfPowSquare;
}

int main(){
    cout << "3^3 = " << pow(3,3) << endl;
    cout << "2^10 = " << pow(2,10) << endl;
    return 0;
}