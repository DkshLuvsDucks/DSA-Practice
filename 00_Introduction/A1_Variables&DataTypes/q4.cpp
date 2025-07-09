// Question 4: Calculate area of a circle; input radius (r); output PI*r*r.
#include <iostream>
using namespace std;

#define PI 3.14159265359

int main (){
    float radius;

    //input values
    cout << "Enter Radius : " ;
    cin >> radius ;

    // Output + calculations
    float area = PI * radius * radius ;
    cout << "Area = " << area << endl ;
    return 0;
}