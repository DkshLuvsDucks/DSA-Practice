#include<iostream>
using namespace std;

int main(){
    int marks1[50]; // initialises contiguous memory spaces with garbage values
    cout << "# Method - 1" << endl << "Array 1 : first element (garbage value) : " << marks1[0] << endl << endl;

    int marks2[50] = {1, 2, 3}; // initialises with given elements and rest elements are 0
    cout << "# Method - 2" << endl << "Array 2 : first element (defined value) : " << marks2[0] << endl;
    cout << "Array 2 : last element (undefined value) : " << marks2[49] << endl << endl;

    int marks3[] = {1,2,3}; // makes an array of the size of given set of values
    cout << "# Method - 3" << endl << "Array 3 : first element (in bound value) : " << marks3[0] << endl;
    cout << "Array 2 : 4th element (out of bound value) : " << marks3[3] << endl;

    return 0;
}