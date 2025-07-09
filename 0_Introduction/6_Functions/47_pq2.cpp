#include<iostream>
using namespace std;

bool isEven(int a){
    return (a % 2) == 0 ? true : false;
}

int main(){
    int a;
    cout << "Enter Number : ";
    cin >> a;
    cout << "The Number is " << (isEven(a) ? "Even" : "Odd" )<< endl;
    return 0;
}