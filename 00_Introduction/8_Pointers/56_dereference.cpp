#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr;
    cout << ptr << endl;
    cout << *(ptr) << endl;
    cout << pptr << endl;
    cout << *(pptr) << endl;

    //modifying
    *ptr = 69;
    cout << a << endl;
    return 0;
}