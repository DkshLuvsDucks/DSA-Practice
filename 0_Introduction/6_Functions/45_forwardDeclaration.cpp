#include<iostream>
using namespace std;

int sum(int a, int b);
int diff(int a, int b);
int main(){
    cout << sum (34, 35) << endl;
    cout << diff (1000, 7) << endl;
    return 0;
}

int sum(int a, int b){
    return a + b;
}

int diff(int a, int b){
    return a - b;
}