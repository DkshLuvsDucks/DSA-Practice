#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Last element as pivot
    int i = low - 1; // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // Place pivot in correct position
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] = {3, -2, 5, 0, -1, 4, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Original array:\n";
    printArray(arr, n);

    quickSort(arr, 0, n-1);

    cout << "Sorted array:\n";
    printArray(arr, n);

    return 0;
}