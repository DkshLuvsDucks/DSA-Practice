#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number : ";
    cin >> num;
    
    int num1, num2, num3, n;
    n = num; //copy of num;
    num1 = num % 10;
    num /= 10;
    num2 = num % 10;
    num /= 10;
    num3 = num;
    int sumCubes = num1*num1*num1 + num2*num2*num2 + num3*num3*num3;

    if(sumCubes == n){
        cout << "ARMSTRONG'S NUMBER!" << endl;
    }
    else{
        cout << "NOT ARMSTRONG'S NUMBER..." << endl;
    }

    return 0;
}