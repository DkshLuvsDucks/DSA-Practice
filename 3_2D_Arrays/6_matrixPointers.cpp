#include<iostream>
using namespace std;

int main(){
    int arr[4][4] = {   {1 ,2 ,3 ,4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    cout << arr << " = " << &arr[0][0] << endl;
    cout << arr + 1 << " != " << &arr[0][1] << endl;
    cout << arr + 1 << " = " << &arr[1][0] << endl;
    // arr[i][j] == *(*(arr + i) + j)
    cout << *(*(arr + 1) + 1) << " = " << arr[1][1] << endl;
    return 0;
}