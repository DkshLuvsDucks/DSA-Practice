#include<iostream>
using namespace std;

int greatest(int a, int b, int c){
    if(a >= b && a >= c){
        return a;
    }
    else if(b >= c){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a, b, c;
    cout << "Enter(a b c): ";
    cin >> a >> b >> c;
    cout << "Greatest = " << greatest(a,b,c) << endl;
    return 0;
}