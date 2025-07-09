#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter Marks : ";
    cin >> marks;

    if(marks <= 100 && marks >= 90){
        cout << "A" << endl;
    }
    else if (marks < 90 && marks >= 75){
        cout << "B" << endl;
    }
    else if (marks < 75 && marks >= 50){
        cout << "C" << endl;
    }
    else if (marks < 50 && marks >= 33){
        cout << "D" << endl;
    }
    else if (marks < 33 && marks >= 0){
        cout << "F" << endl;
    }
    else{
        cout << "Enter valid marks(0 to 100)!" << endl;
    }

    return 0;
}