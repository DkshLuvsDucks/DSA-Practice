#include<iostream>
using namespace std;

void isEven(int num){
    if(!(num & 1)){
        cout << num << " is EVEN." << endl;
    } else {
        cout << num << " is ODD." << endl;
    }
}

int main(){
    isEven(7);
    isEven(6);
    return 0;
}