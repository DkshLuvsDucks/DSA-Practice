// Question 2: Input cost of 3 items (pencil, pen, eraser); output total cost (with optional 18% GST).
#include <iostream>
using namespace std;

int main (){
    float cost_pencil, cost_pen, cost_eraser;

    //input values
    cout << "Enter cost of pencil : " ;
    cin >> cost_pencil;

    cout << "Enter cost of pen : " ;
    cin >> cost_pen;

    cout << "Enter cost of eraser : " ;
    cin >> cost_eraser;

    //calculation + output
    float total = cost_pencil + cost_pen + cost_eraser;
    float total_with_gst = total + ( 0.18 * total);

    cout << "Total = " << total << endl;
    cout << "Total with 18% GST = " << total_with_gst << endl;
    
    return 0;
}