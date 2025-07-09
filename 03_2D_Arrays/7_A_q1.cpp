/*
count number of 7s in a 2d array

using dynamic allocation in this one for practice, we can just make arrays like prev method

You can use a double pointer (int **) to pass a 2D array to a function in C or C++, but only if
the 2D array was created as an array of pointers (i.e., dynamically allocated as an array of arrays).
*/

#include<iostream>
using namespace std;

void printMatrix(int **mat, int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void countSeven(int **mat, int rows, int cols){
    int count = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(*(*(mat + i) + j) == 7){
                count++;
            }
        }
    }
    cout << "Count of 7s = " << count;
}

int main(){
    int rows, cols;
    cout << "Enter Number Of Rows: ";
    cin >> rows;
    cout << "Enter Number Of Cols: ";
    cin >> cols;

    cout << "Enter Matrix Elements (w space): ";
    int **mat = new int*[rows];
    for(int i = 0; i < rows; i++){
        mat[i] = new int[cols];
        for(int j = 0; j < cols; j++){
            cin >> mat[i][j];
        }
    }
    cout << endl << "Entered Matrix :" << endl;
    printMatrix(mat, rows, cols);

    countSeven(mat, rows, cols);

    // Free memory
    for(int i = 0; i < rows; i++)
        delete[] mat[i];
    delete[] mat;
  
    return 0;
}