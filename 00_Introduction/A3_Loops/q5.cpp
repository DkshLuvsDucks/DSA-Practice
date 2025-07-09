#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    int first = 0, second = 1;
    cout << first << " " << second << " " ;

    for (int i = 2; i < n; i++){
        int fib = first + second;
        cout << fib << " ";
        first = second;
        second = fib;
    }

    cout << endl;

    return 0;
}