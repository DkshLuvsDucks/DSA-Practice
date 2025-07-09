#include<iostream>
using namespace std;

void printSpiralMatrix (int mat[][4], int rows, int cols){
    int srow = 0, scol = 0;
    int erow = rows - 1, ecol = cols - 1;

    while(srow <= erow && scol <= ecol){
        // top
        for(int j = scol; j <= ecol; j++){
            cout << mat [srow] [j] << " ";
        }

        // right
        for(int i = srow + 1; i <= erow; i++){
            cout << mat [i] [ecol] << " ";
        }

        // bottom
        for(int j = ecol - 1; j >= scol; j--){
            if(srow == erow){ // corner case handle to prevent duplicate middle vals
                break;
            }
            cout << mat [erow] [j] << " ";
        }
        
        // left
        for(int i = erow - 1; i >= srow + 1; i--){
            if(scol == ecol){ // corner case handle to prevent duplicate middle vals
                break;
            }
            cout << mat [i] [scol] << " ";
        }
        
        srow++; scol++;
        erow--; ecol--;
    }

    cout << endl;

}

int main(){
    int arr[4][4] = {   {1 ,2 ,3 ,4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
    
    printSpiralMatrix(arr, 4, 4);

    int arr2[7][4] = {   {1 ,2 ,3 ,4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16},
                        {17, 18, 19, 20},
                        {21, 22, 23, 24},
                        {25, 26, 27, 28}};

    printSpiralMatrix(arr2, 7, 4);

    return 0;
}