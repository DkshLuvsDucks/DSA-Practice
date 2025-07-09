#include<iostream>
using namespace std;

int sum (int a, int b){
    return a + b;
}

double sum (double a, double b){
    return a + b;
}

int sum (int a, int b, int c){
    return a + b + c;
}

int main(){
    cout << " Sum(1,2) = " << sum(1,2) << endl;
    cout << " Sum(10.5,2.75) = " << sum(10.5,2.75) << endl;
    cout << " Sum(1,2,3) = " << sum(1,2,3) << endl;
    return 0;
}