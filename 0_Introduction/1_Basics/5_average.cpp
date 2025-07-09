#include <iostream>
using namespace std;

int main(){
    float english_marks, maths_marks, science_marks;

    //input marks
    cout << "Enter English marks : " ;
    cin >> english_marks;
    
    cout << "Enter Maths marks : " ;
    cin >> maths_marks;
    
    cout << "Enter Science marks : " ;
    cin >> science_marks;
    
    //output
    float avg = ( english_marks + maths_marks + science_marks ) / 3 ;
    cout << "Average marks = " << avg << endl ;

    return 0;
}