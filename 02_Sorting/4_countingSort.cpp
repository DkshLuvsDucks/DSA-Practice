#include<iostream>
#include<limits.h>
using namespace std;

void printArr(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

// T(n) = O(n)
void countSort(int *arr, int size){
    int maxVal = INT_MIN, minVal = INT_MAX;
    for(int i = 0; i < size; i++){
        maxVal = max(maxVal, arr[i]);
        minVal = min(minVal, arr[i]);
    }
    int freq[maxVal + 1] = {0};
    for(int i = 0; i < size; i++){
        freq[arr[i]]++;
    }
    for(int i = minVal, j = 0; i <= maxVal; i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);
    
    cout << "Array before sorting:\n";
    printArr(arr, size);
    countSort(arr, size);
    cout << "\nArray after sorting:\n";
    printArr(arr, size);
    
    return 0;
}