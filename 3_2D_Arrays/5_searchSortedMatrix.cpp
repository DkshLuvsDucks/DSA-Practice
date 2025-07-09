#include<iostream>
using namespace std;

// T(n) = O(n^2)
void findIdx_Bruteforce (int mat[][4], int rows, int cols, int target){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if (mat[i][j] == target){
                cout << target << " found at mat[" << i << "][" << j << "]\n";
                return;
            }
        }   
    }
    cout << target << " not found in the matrix...\n";
}

// T(n) = n * log m
void findIdx_BinarySearch (int mat[][4], int rows, int cols, int target){
    for(int i = 0; i < rows; i++){
        int start = 0, end = cols - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(mat[i][mid] == target){
                cout << target << " found at mat[" << i << "][" << mid << "]\n";
                return;
            } else if (mat[i][mid] < target){
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    cout << target << " not found in the matrix...\n";
}

// T(n) = O(n+m)
void findIdx_StaircaseSearch (int mat[][4], int rows, int cols, int target){
    int i = 0, j = cols - 1;
    while( i < rows && j >= 0){
        if(mat[i][j] == target){
            cout << target << " found at mat[" << i << "][" << j << "]\n";
            return;
        } else if (mat[i][j] > target){
            //left
            j--;
        } else {
            //down
            i++;
        }
    }
    cout << target << " not found in the matrix...\n";
}


int main(){
    int arr[4][4] = {   {10 ,20 ,30 ,40},
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 50}};
    cout << "\nMethod #1 : Bruteforcing -\n";
    findIdx_Bruteforce(arr, 4, 4, 40);
    findIdx_Bruteforce(arr, 4, 4, 18);
    findIdx_Bruteforce(arr, 4, 4, 33);
    
    cout << "\nMethod #2 : Binary Search -\n";
    findIdx_BinarySearch(arr, 4, 4, 40);
    findIdx_BinarySearch(arr, 4, 4, 18);
    findIdx_BinarySearch(arr, 4, 4, 33);

    cout << "\nMethod #3 : Staircase Search -\n";
    findIdx_StaircaseSearch(arr, 4, 4, 40);
    findIdx_StaircaseSearch(arr, 4, 4, 18);
    findIdx_StaircaseSearch(arr, 4, 4, 33);

    return 0;
}