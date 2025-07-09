// Question 1: Input the side of a square; output the area (n*n).
#include <iostream>
using namespace std;

int main() {
    float side;

    //input side
    cout << "Enter side of the Square : " ;
    cin >> side ;

    //output area of square
    cout << "Area = " << side * side << endl ;
    return 0;
}