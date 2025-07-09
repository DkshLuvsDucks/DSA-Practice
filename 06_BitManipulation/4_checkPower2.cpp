#include<iostream>
using namespace std;

void checkPower2(int num){
    (num & (num-1)) == 0 ? cout << "true\n" : cout << "false\n" ;
}

int main(){
    checkPower2(2);
    checkPower2(3);
    checkPower2(4);
    checkPower2(8);
    return 0;
}