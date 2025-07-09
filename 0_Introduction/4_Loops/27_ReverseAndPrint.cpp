#include<iostream>
using namespace std;

int main(){
    int n, reverse = 0;
    cout << "Enter Number : ";
    cin >> n;
    while(n != 0){
        int dig = n % 10;
        n /= 10;
        reverse = reverse * 10 + dig;
    }
    cout << "reverse num = " << reverse << endl;
    return 0;
}