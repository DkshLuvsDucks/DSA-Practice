#include <iostream>
using namespace std;

/*
Time Complexity: O(m*n) - Linear time relative to input size
Space Complexity: O(m*n) - Exactly matches the input size requirements
*/

int** construct2DArray(int* original, int originalSize, int m, int n, int& resultRows, int& resultCols) {
    // Check if conversion is possible
    if (originalSize != m * n) {
        resultRows = 0;
        resultCols = 0;
        return nullptr;
    }
    
    // Allocate 2D array
    int** result = new int*[m];
    for (int i = 0; i < m; i++) {
        result[i] = new int[n];
    }
    
    // Fill the 2D array
    for (int i = 0; i < originalSize; i++) {
        int row = i / n;
        int col = i % n;
        result[row][col] = original[i];
    }
    
    resultRows = m;
    resultCols = n;
    return result;
}

int main() {
    int originalSize;
    cout << "Enter original array size: ";
    cin >> originalSize;
    
    int* original = new int[originalSize];
    cout << "Enter array elements: ";
    for (int i = 0; i < originalSize; i++) {
        cin >> original[i];
    }
    
    int m, n;
    cout << "Enter m (rows): ";
    cin >> m;
    cout << "Enter n (columns): ";
    cin >> n;
    
    int resultRows, resultCols;
    int** result = construct2DArray(original, originalSize, m, n, resultRows, resultCols);
    
    if (result == nullptr) {
        cout << "[]" << endl;
    } else {
        cout << "Result:" << endl;
        for (int i = 0; i < resultRows; i++) {
            cout << "[";
            for (int j = 0; j < resultCols; j++) {
                cout << result[i][j];
                if (j != resultCols - 1) cout << ", ";
            }
            cout << "]" << endl;
        }
        
        // Cleanup memory
        for (int i = 0; i < resultRows; i++) {
            delete[] result[i];
        }
        delete[] result;
    }
    
    delete[] original;
    return 0;
}
