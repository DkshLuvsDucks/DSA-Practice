#include<iostream>
using namespace std;

int binarySearchIterative (int arr[], int size, int key){
    int start = 0, end = size - 1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}

int binarySearchRecursive (int arr[], int key, int start, int end){
    if (start > end)
        return -1; // base case: not found

    int mid = start + (end - start) / 2;
    
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] > key){
        binarySearchRecursive(arr, key, start, mid - 1);
    }
    else{
        binarySearchRecursive(arr, key, mid + 1, end);
    }
}

int main(){
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);

    // method #1 (ITERATIVE)
    int idx = binarySearchIterative(arr, size, 10);
    if(idx != -1){
        cout << "Element(10) found at idx : " << idx << endl;
    }
    else{
        cout << "Element not found..." << endl;
    }
    // method #2 (RECURSIVE)
    int idx_2 = binarySearchRecursive(arr, 10, 0, size - 1);
    if(idx_2 != -1){
        cout << "Element(10) found at idx : " << idx_2 << endl;
    }
    else{
        cout << "Element not found..." << endl;
    }
    
    return 0;
}

