#include <iostream>
using namespace std;

int main (){
    int side_1, side_2;
    cout << "Enter sides of the rectangle (side_1 side_2) : " ;
    cin >> side_1 >> side_2;
    cout << "Perimeter : " << 2 * ( side_1 + side_2 ) << "\n";
    return 0;
}