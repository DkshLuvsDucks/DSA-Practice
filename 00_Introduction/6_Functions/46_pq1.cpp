#include<iostream>
using namespace std;

int prod(int a, int b){
    return a * b;
}

int main(){
    int a, b;
    cout << "Enter Numbers (a b): ";
    cin >> a >> b;
    cout << "Product = " << prod(a,b) << endl;
    return 0;
}