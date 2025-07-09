#include<iostream>
using namespace std;

void printArr(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

// T(n) = O(n^2)
void selectionSort(int *arr, int size){
    for(int i = 0; i < size - 1; i++){
        int minIdx = i;
        for(int j  = i + 1; j < size; j++){
            if(arr[minIdx] > arr[j]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);
    
    cout << "Array before sorting:\n";
    printArr(arr, size);
    selectionSort(arr, size);
    cout << "\nArray after sorting:\n";
    printArr(arr, size);
    
    return 0;
}