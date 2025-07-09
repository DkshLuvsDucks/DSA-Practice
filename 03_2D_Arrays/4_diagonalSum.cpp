// find sum of diagonals of a square matrix
#include<iostream>
using namespace std;

void findSum (int arr[][4], int n){
    int sum = 0;
    // O(n^2)
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         if(i==j){
    //             sum += arr[i][j];
    //         } else if (j == n - i - 1){
    //             sum += arr [i][j];
    //         }
    //     }   
    // }
    
    // OPTIMIZED: T(n) = O(n)
    for(int i = 0; i < n; i++){
        sum += arr[i][i];
        if (i != n-i-1){
            sum += arr [i][n-i-1];
        }
    }
    cout << "Sum = " << sum << endl;
}

int main(){
    int arr[4][4] = {   {1 ,2 ,3 ,4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
    findSum(arr, 4);
    return 0;
}