#include<iostream>
using namespace std;

int modifiedBinSearch(int *arr, int si, int ei, int target){
    if(si > ei){
        return -1;
    }
    int mid = si + (ei - si)/2;
    if(arr[mid] == target){
        return mid;
    }
    if (arr[si] <= arr[mid]){ //L1
        if(arr[si] <= target && target <= arr[mid]){
            // left half
            modifiedBinSearch(arr, si, mid, target);
        } else {
            // right half
            modifiedBinSearch(arr, mid+1, ei, target);
        }
    } else { //L2
        if(arr[mid] <= target && target <= arr[ei]){
            // left half
            modifiedBinSearch(arr, mid+1, ei, target);
        } else {
            // right half
            modifiedBinSearch(arr, si, mid-1, target);
        }
    }
}

int main(){
    int arr[] = {4, 5, 6, 7, 0, 1, 2, 3};
    int size = sizeof(arr)/sizeof(int);
    cout << "Element(0) at: " << modifiedBinSearch(arr, 0, size-1, 0) << endl;
    cout << "Element(1) at: " << modifiedBinSearch(arr, 0, size-1, 1) << endl;
    cout << "Element(2) at: " << modifiedBinSearch(arr, 0, size-1, 2) << endl;
    cout << "Element(3) at: " << modifiedBinSearch(arr, 0, size-1, 3) << endl;
    cout << "Element(4) at: " << modifiedBinSearch(arr, 0, size-1, 4) << endl;
    cout << "Element(5) at: " << modifiedBinSearch(arr, 0, size-1, 5) << endl;
    cout << "Element(6) at: " << modifiedBinSearch(arr, 0, size-1, 6) << endl;
    cout << "Element(7) at: " << modifiedBinSearch(arr, 0, size-1, 7) << endl;
    cout << "Element(8) at: " << modifiedBinSearch(arr, 0, size-1, 8) << endl;
    return 0;
}