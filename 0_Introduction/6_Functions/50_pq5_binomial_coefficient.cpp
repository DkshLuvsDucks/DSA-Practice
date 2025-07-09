#include<iostream>
using namespace std;

int fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * fact(n-1);
}

int binCoeff(int n, int r){
    return fact(n) / (fact(r) * fact(n-r));
}


int main(){
    int n, r;
    cout << "Enter (n r): ";
    cin >> n >> r;
    cout << "Binomial Coefficient = " << binCoeff(n,r) << endl;
    return 0;
}