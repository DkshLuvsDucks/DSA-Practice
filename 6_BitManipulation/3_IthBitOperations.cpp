#include<iostream>
using namespace std;

int getIthBit (int num, int i){
    int bitMask = 1 << i;
    return (num & bitMask) ? 1 : 0;
    /*
    simple approach : return (num >> i) & 1;
    */
}

int setIthBit(int num, int i){
    return num | (1 << i);
}

int clearIthBit(int num, int i){
    return num & (~(1 << i));
}

int main(){
    cout << getIthBit(6,2) << endl;
    cout << setIthBit(6,3) << endl;
    cout << clearIthBit(7,0) << endl;
    return 0;
}