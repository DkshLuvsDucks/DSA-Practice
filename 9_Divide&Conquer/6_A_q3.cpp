#include <iostream>
#include <vector>
using namespace std;

// Merge function that also counts inversions
int merge(int arr[], int left, int mid, int right) {
    int i = left, j = mid + 1;
    int invCount = 0;
    vector<int> temp;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
            invCount += (mid - i + 1); // All remaining elements in left are > arr[j]
        }
    }

    // Add remaining elements
    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= right) temp.push_back(arr[j++]);

    // Copy back to original array
    for (int k = 0; k < temp.size(); k++) {
        arr[left + k] = temp[k];
    }

    return invCount;
}

// Modified merge sort that returns inversion count
int mergeSort(int arr[], int left, int right) {
    int invCount = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;
        invCount += mergeSort(arr, left, mid);
        invCount += mergeSort(arr, mid + 1, right);
        invCount += merge(arr, left, mid, right);
    }
    return invCount;
}

// Wrapper function
int getInversions(int arr[], int n) {
    return mergeSort(arr, 0, n - 1);
}

// Main
int main() {
    int arr[] = {2, 4, 1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Inversion Count = " << getInversions(arr, n) << endl;
    return 0;
}
