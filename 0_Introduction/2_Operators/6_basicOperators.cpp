#include <iostream>
using namespace std;

//symbolic constant, doesnt occupy space in memory (MACROS)
#define ll long long

int main(){
    //constant value, immmutable, occupies space in memory
    const float PI = 3.14;  
    const float g = 9.8;

    //using macro for defining data type
    ll num = 10;

    //implicit type conversion
    cout << (10 / 3) << endl; // 3
    cout << (10 / 3.0) << endl; // 3.33333
    cout << ('A' + 1) << endl; // 66

    //explicit type conversion
    cout << (int)(PI) << endl; //3
    cout << ((float) 10 / 3) << endl; // 3.33333
    cout << (char)('A' + 1) << endl; // B

    //practice questions
    cout << ((bool)3 + 2) << endl; // 3 => bool 3 gives 1 and 1 + 2 = 3
    cout << (23.5 + 2 + 'A') << endl; // 90.5

    //arithmetic operatiors
    int a = 5;
    int b = 3;

    cout << "a + b = " << a + b << endl; // 8
    cout << "a - b = " << a - b << endl; // 2
    cout << "a * b = " << a * b << endl; // 15
    cout << "a / b = " << a / b << endl; // 1
    cout << "a % b = " << a % b << endl; // modulo (remainder) : 2

    //unary operator
    /*
    ++a = pre increment unary operation (update and then use)
    a++ = post increment unary operation (use and then update)
    */
    a++; // 5 + 1
    cout << "a = " << a << endl ;
    a--; // 6 - 1
    cout << "a = " << a << endl ;

    //assignment operators
    a = 10;
    cout << a << endl ;
    a += 1; // a = a + 1 => 11
    cout << a << endl ;
    a -= 1; // a = a - 1 => 10
    cout << a << endl ;
    a *= 5; // a = a * 5 => 50
    cout << a << endl ;
    a /= 5; // a = a / 5 => 10
    cout << a << endl ;

    //relational operators (returns True/False values)
    a == b;
    a != b;
    a < b;
    a > b;
    a <= b;
    a >= b;

    //logical operators (AND/OR/NOT)
    cout << ((3 < 15) && (3 > 2)) << endl ; // AND
    cout << ((3 == 15) || (3 < 4)) << endl ; // OR
    cout << (!(3 == 15)) << endl ; // NOT

    

    return 0;
}