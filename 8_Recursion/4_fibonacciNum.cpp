#include<iostream>
using namespace std;

int fibNum(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fibNum(n-1) + fibNum(n-2);
}

int main(){
    cout << "fib(5) = " << fibNum(5) << endl;
    return 0;
}