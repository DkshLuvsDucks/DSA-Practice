#include<iostream>
using namespace std;

void setBit(int num, int i, int bit){
    num = num & ~(1 << i);
    num = num | (bit << i);
    cout << num << endl;
}

int main(){
    setBit(7,2,0);
    return 0;
}