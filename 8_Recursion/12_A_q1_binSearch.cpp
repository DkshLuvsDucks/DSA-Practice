#include<iostream>
using namespace std;

int binSearch(int *arr, int target, int start, int end){
    if(start>end){
        cout << "Not found" << endl;
        return -1;
    } else {
        int mid = start + (end - start) / 2;
        if(arr[mid]==target){
            cout << "Target(" << target << ") found at: " << mid << endl;
            return mid;
        } else if (arr[mid] < target) {
            return binSearch(arr, target, mid + 1, end);
        } else {
            return binSearch(arr, target, start, mid - 1);
        }
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(int);
    binSearch(arr, 5, 0, size-1);
    return 0;
}