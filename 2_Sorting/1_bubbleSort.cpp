#include<iostream>
using namespace std;

void printArr(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

// T(n) = O(n^2)
// n*(n-1)/2
void bubbleSort(int *arr, int size){
    for(int i = 0; i < size - 1; i++){
        bool isSwapped = false; //optimization for alr sorted arrays
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if(!isSwapped){
            return;
        }
    }
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);
    
    cout << "Array before sorting:\n";
    printArr(arr, size);
    bubbleSort(arr, size);
    cout << "\nArray after sorting:\n";
    printArr(arr, size);
    
    return 0;
}