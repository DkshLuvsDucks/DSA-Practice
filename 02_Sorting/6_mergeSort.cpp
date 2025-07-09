#include <iostream>
using namespace std;

void printArr(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int left, int mid, int right) {
    int sizeL = mid - left + 1;
    int sizeR = right - mid;
    
    // Dynamic allocation for temp arrays
    int* Left = new int[sizeL];
    int* Right = new int[sizeR];

    // Copy data to temp arrays
    for(int i = 0; i < sizeL; i++) {
        Left[i] = arr[left + i];
    }
    for(int j = 0; j < sizeR; j++) {
        Right[j] = arr[mid + 1 + j];
    }

    // Merge temp arrays back into arr[]
    int i = 0, j = 0, k = left;
    
    while(i < sizeL && j < sizeR) {
        if(Left[i] <= Right[j]) {
            arr[k] = Left[i];
            i++;
        } else {
            arr[k] = Right[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements
    while(i < sizeL) {
        arr[k] = Left[i];
        i++;
        k++;
    }

    while(j < sizeR) {
        arr[k] = Right[j];
        j++;
        k++;
    }

    // Free memory
    delete[] Left;
    delete[] Right;
}

void mergeSort(int arr[], int left, int right) {
    if(left < right) {
        int mid = left + (right - left) / 2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        
        merge(arr, left, mid, right);
    }
}

int main() {
    int n;
    cout << "Enter number of Elements in Array: ";
    cin >> n;
    
    int* arr = new int[n];
    
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "\nUnsorted Array:\n";
    printArr(arr, n);
    
    mergeSort(arr, 0, n - 1);
    
    cout << "\nSorted Array:\n";
    printArr(arr, n);
    
    delete[] arr;
    return 0;
}
