#include<iostream>
using namespace std;

int main(){
    int a = 9;
    int *ptr = &a;
    cout << &a << " = " << ptr << endl;

    float pi = 3.14;
    float *ptr2 = &pi;
    cout << &pi << " = " << ptr2 << endl;

    cout << "Size of int pointer = " << sizeof(ptr) << endl;
    cout << "Size of float pointer = " << sizeof(ptr2) << endl;

    int **pptr = &ptr;
    cout << &ptr << " = " << pptr << endl;

    return 0;
}