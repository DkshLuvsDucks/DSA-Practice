#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int marks = 90;
    char grade = 'A';
    float cgpa1 = 8.728197191631811821831; 
    double cgpa2 = 8.728197191631811821831;
    bool isStudent = true;

    cout << marks << " " << grade << " " << setprecision(12) << cgpa1 << " " << setprecision(12)  << cgpa2 << " " << isStudent << endl ;
    
    cout << "size of int = " << sizeof(int) << endl;
    cout << "size of char = " << sizeof(char) << endl;
    cout << "size of float = " << sizeof(float) << endl;
    cout << "size of double = " << sizeof(double) << endl;
    cout << "size of bool = " << sizeof(bool) << endl;
    
    return 0;
}