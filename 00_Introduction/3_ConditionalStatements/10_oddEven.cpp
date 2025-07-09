#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter Number : ";
    cin >> n;
    
    //alternate way with ternary operator
    //(n%2 == 0) ? cout << "EVEN" << endl : cout << "ODD" << endl;
    
    if((n % 2 == 0)){
        cout << "EVEN" << endl;
    }
    else{
        cout << "ODD" << endl;
    }
    
    return 0;
}