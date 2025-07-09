#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter Number : ";
    cin >> n;
    while(n != 0){
        int dig = n % 10;
        n /= 10;
        if(dig % 2 != 0) sum += dig;
    }
    cout << "sum of odd digits = " << sum << endl;
    return 0;
}