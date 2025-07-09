#include<iostream>
using namespace std;

void clearLastIBits(int num, int i){
    num = num & (~0 << i);
    cout << num << endl;
}

int main(){
    clearLastIBits(7,1);
    return 0;
}