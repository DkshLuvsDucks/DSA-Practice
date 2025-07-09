#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    char op;
    cout << "Enter Operation (+ - * /) : ";
    cin >> op;

    //Using Switch
    switch(op){
        case '+':
            cout << "a + b = " << a + b << endl;
            break;
        case '-':
            cout << "a - b = " << a - b << endl;
            break;
        case '*':
            cout << "a * b = " << a * b << endl;
            break;
        case '/':
            cout << "a / b = " << a / b << endl;
            break;
        default:
            cout << "Enter a VALID operation!" << endl;
            break;
    }

    //Using if-else
    if (op == '+'){
        cout << "a + b = " << a + b << endl;   
    }
    else if (op == '-'){
        cout << "a - b = " << a - b << endl;   
    }
    else if (op == '*'){
        cout << "a * b = " << a * b << endl;   
    }
    else if (op == '/'){
        cout << "a / b = " << a / b << endl;   
    }
    else{
        cout << "Enter a VALID operation!" << endl;
    }

    return 0;
}