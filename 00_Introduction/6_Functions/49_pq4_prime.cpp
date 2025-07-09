#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n == 1){
        return false;
    }
    for (int i = 2; i * i <= n; i++ ){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << n << " is " << (isPrime(n) ? "a Prime Number.": "NOT a Prime Number.");
    return 0;
}