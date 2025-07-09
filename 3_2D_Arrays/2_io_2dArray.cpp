#include<iostream>
using namespace std;

int main(){
    int rows, cols;
    cout << "Enter Number Of Rows: ";
    cin >> rows;
    cout << "Enter Number Of Cols: ";
    cin >> cols;

    // taking inputs for 2d matrix
    int arr [rows] [cols];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> arr [i] [j];
        }
    }

    // printing 2d matrix
    cout << "\n2d Matrix:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr [i] [j] << " ";
        }
        cout << endl;
    }

    return 0;
}