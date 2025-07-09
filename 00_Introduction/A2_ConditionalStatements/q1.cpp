#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter number : ";
    cin >> a;

    if(a > 0){
        cout << "POSITIVE" << endl;
    }
    else if ( a < 0){
        cout << "NEGATIVE" << endl;
    }
    else{
        cout << "ZERO" << endl;
    }
    return 0;
}