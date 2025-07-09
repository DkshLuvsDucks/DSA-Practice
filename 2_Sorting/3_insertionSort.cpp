#include<iostream>
using namespace std;

void printArr(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

// T(n) = O(n^2)
void insertionSort(int *arr, int size){
    for(int i = 1; i < size; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr){
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);
    
    cout << "Array before sorting:\n";
    printArr(arr, size);
    insertionSort(arr, size);
    cout << "\nArray after sorting:\n";
    printArr(arr, size);
    
    return 0;
}