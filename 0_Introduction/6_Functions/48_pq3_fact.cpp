#include<iostream>
using namespace std;

int fact (int n){
    if (n == 0 || n == 1){
        return 1;
    }    
    return n * fact(n-1);
}


int main(){
    int n;

    do{    
        cout << "Enter Number : ";
        cin >> n;
        if (n < 0){
            cout << "Enter a valid number ..." << endl;
        }
    } while (n < 0);

    cout << "Fact = " << fact(n) << endl;

    return 0;
}