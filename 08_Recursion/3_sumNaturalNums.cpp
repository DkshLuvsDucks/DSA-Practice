#include<iostream>
using namespace std;

int sumNaturalNum(int n){
    if(n==1){
        return 1;
    }
    return n + sumNaturalNum(n-1);
}

int main(){
    cout << "sum of 5 nat nums = " << sumNaturalNum(5) << endl;
    return 0;
}