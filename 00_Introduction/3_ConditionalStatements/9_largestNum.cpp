#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    
    cout << "Enter first num : " ;
    cin >> num1 ;

    cout << "Enter second num : " ;
    cin >> num2 ;

    if(num1 > num2){
        cout << "Num1 is greater : " << num1 << endl;
    }
    else if (num1 < num2){
        cout << "Num2 is greater : " << num2 << endl;
    }
    else{
        cout << "both numbers are equal...";
    }
    return 0;
}