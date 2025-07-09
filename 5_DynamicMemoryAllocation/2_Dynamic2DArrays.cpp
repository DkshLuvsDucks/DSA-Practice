#include<iostream>
using namespace std;

void printMatrix(int **mat, int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;        
    }
}

int main(){
    int rows, cols;
    cout << "Enter Num Rows: ";
    cin >> rows;
    cout << "Enter Num Cols: ";
    cin >> cols;

    // array of pointers
    int **matrix = new int*[rows];
    // pointers pointing to 1D arrays
    for(int i = 0; i < rows; i++){
        matrix[i] = new int[cols];
    }

    // filling values in matrix
    int x = 1;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            matrix[i][j] = x++;
        }
    }

    // printing matrix
    printMatrix(matrix, rows, cols);

    cout << matrix[2][2] << endl;
    cout << *(*(matrix + 2) + 2) << endl;

    // free up memory
    for(int i = 0; i < rows; i++){
        delete [] matrix[i];
    }
    delete [] matrix; 
    
    return 0;
}