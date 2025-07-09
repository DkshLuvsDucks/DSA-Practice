#include <iostream>
using namespace std;

// Layer-by-layer rotation (in-place)
void rotateLayerByLayer(int** mat, int n) {
    for (int layer = 0; layer < n / 2; ++layer) {
        int first = layer;
        int last = n - 1 - layer;
        for (int i = first; i < last; ++i) {
            int offset = i - first;
            int top = mat[first][i];
            // left -> top
            mat[first][i] = mat[last - offset][first];
            // bottom -> left
            mat[last - offset][first] = mat[last][last - offset];
            // right -> bottom
            mat[last][last - offset] = mat[i][last];
            // top -> right
            mat[i][last] = top;
        }
    }
}

// Transpose and reverse each row (in-place)
void rotateTransposeReverse(int** mat, int n) {
    // Transpose
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    // Reverse each row
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            swap(mat[i][j], mat[i][n - 1 - j]);
        }
    }
}

// Helper: Deep copy a matrix
int** copyMatrix(int** src, int n) {
    int** dest = new int*[n];
    for (int i = 0; i < n; ++i) {
        dest[i] = new int[n];
        for (int j = 0; j < n; ++j)
            dest[i][j] = src[i][j];
    }
    return dest;
}

// Helper: Print matrix
void printMatrix(int** mat, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

// Helper: Free dynamically allocated matrix
void freeMatrix(int** mat, int n) {
    for (int i = 0; i < n; ++i)
        delete[] mat[i];
    delete[] mat;
}

int main() {
    int n;
    cout << "Enter size of matrix (n): ";
    cin >> n;

    // Dynamic allocation
    int** mat = new int*[n];
    for (int i = 0; i < n; ++i)
        mat[i] = new int[n];

    cout << "Enter matrix elements (row-wise):\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> mat[i][j];

    // Make two copies for both methods
    int** mat1 = copyMatrix(mat, n);
    int** mat2 = copyMatrix(mat, n);

    // Apply both rotations
    rotateLayerByLayer(mat1, n);
    rotateTransposeReverse(mat2, n);

    cout << "\nRotated (Layer-by-layer):\n";
    printMatrix(mat1, n);

    cout << "Rotated (Transpose and Reverse):\n";
    printMatrix(mat2, n);

    // Free memory
    freeMatrix(mat, n);
    freeMatrix(mat1, n);
    freeMatrix(mat2, n);

    return 0;
}