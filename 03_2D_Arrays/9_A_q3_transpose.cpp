#include <iostream>
using namespace std;

// Print any dynamically allocated 2D array
void printMatrix(int **arr, int rows, int cols) {
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Dynamic allocation of original matrix
    int **mat = new int*[rows];
    for(int i = 0; i < rows; i++)
        mat[i] = new int[cols];

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> mat[i][j];

    cout << "Original matrix:\n";
    printMatrix(mat, rows, cols);

    // Dynamic allocation of transposed matrix
    int **trans = new int*[cols];
    for(int i = 0; i < cols; i++)
        trans[i] = new int[rows];

    // Compute transpose
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            trans[j][i] = mat[i][j];

    cout << "Transposed matrix:\n";
    printMatrix(trans, cols, rows);

    // Free memory
    for(int i = 0; i < rows; i++)
        delete[] mat[i];
    delete[] mat;

    for(int i = 0; i < cols; i++)
        delete[] trans[i];
    delete[] trans;

    return 0;
}
