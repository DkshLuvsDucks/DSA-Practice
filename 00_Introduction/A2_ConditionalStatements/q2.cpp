#include<iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter Year : ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "LEAP YEAR" << endl;
    } else {
        cout << "NOT LEAP YEAR" << endl;
    }

    return 0;
}