#include<iostream>
#include<limits.h>
using namespace std;

void printArr(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

void bubbleSort(int *arr, int size){
    for(int i = 0; i < size - 1; i++){
        bool isSwapped = false; //optimization for alr sorted arrays
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] < arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if(!isSwapped){
            return;
        }
    }
}

void selectionSort(int *arr, int size){
    for(int i = 0; i < size - 1; i++){
        int minIdx = i;
        for(int j  = i + 1; j < size; j++){
            if(arr[minIdx] < arr[j]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

void insertionSort(int *arr, int size){
    for(int i = 1; i < size; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] < curr){
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

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
    for(int i = maxVal, j = 0; i >= minVal; i--){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }
}

int main(){
    int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int size = sizeof(arr) / sizeof(int);
    int temp[size];

    cout << "Original Array:\n";
    printArr(arr, size);
    
    // Bubble Sort
    cout << "\na. Bubble Sort (Descending):\n";
    for(int i = 0; i < size; i++) temp[i] = arr[i]; // Create a copy
    bubbleSort(temp, size);
    printArr(temp, size);
    
    // Selection Sort (Note: there's a bug in your selectionSort function)
    cout << "\nb. Selection Sort (Descending):\n";
    for(int i = 0; i < size; i++) temp[i] = arr[i]; // Create a copy
    selectionSort(temp, size);
    printArr(temp, size);
    
    // Insertion Sort
    cout << "\nc. Insertion Sort (Descending):\n";
    for(int i = 0; i < size; i++) temp[i] = arr[i]; // Create a copy
    insertionSort(temp, size);
    printArr(temp, size);
    
    // Counting Sort
    cout << "\nd. Counting Sort (Descending):\n";
    for(int i = 0; i < size; i++) temp[i] = arr[i]; // Create a copy
    countSort(temp, size);
    printArr(temp, size);

    return 0;
}