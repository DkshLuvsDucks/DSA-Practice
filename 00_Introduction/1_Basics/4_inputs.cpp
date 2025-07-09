#include <iostream>
using namespace std;

int main(){
    int num1, num2;

    //input num1
    cout << "Enter first number : ";
    cin >> num1;

    //input num2
    cout << "Enter second number : ";
    cin >> num2;

    //operations
    int sum = num1 + num2;
    cout << "Sum = " << sum << endl;
    
    int product = num1 * num2;
    cout << "Product = " << product << endl;
    
    int difference = num1 - num2;
    cout << "Difference = " << difference << endl;

    int division = num1 / num2;
    cout << "Division = " << division << endl;

    int modulo = num1 % num2;
    cout << "Modulo = " << modulo << endl;

    return 0;
}