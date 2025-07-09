#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter number 1 : ";
    cin >> a;
    cout << "Enter number 2 : ";
    cin >> b;
    cout << "Enter number 3 : ";
    cin >> c;

    if ((a > b) && (a > c)){
        cout << "Num1 is largest : " << a << endl;
    }
    else if ((b > a) && (b > c)){
        cout << "Num2 is largest : " << b << endl;
    }
    else if ((c > a) && (c > b)){
        cout << "Num3 is largest : " << c << endl;
    }
    else{
        cout << "More than 1 numbers are equal..." << endl;
    }
    return 0;
}