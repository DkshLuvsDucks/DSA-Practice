#include<iostream>
using namespace std;

bool isSorted(int *arr, int n, int i){
    if(i == n-1){
        return true;
    }
    if(arr[i] > arr[i+1]){
        return false;
    }
    return isSorted(arr, n, i+1);
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int s1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {5, 4, 3, 2, 1};
    int s2 = sizeof(arr2) / sizeof(int);
    cout << "Arr 1 = " << (isSorted(arr1, s1, 0) ? "true" : "false") << endl;
    cout << "Arr 2 = " << (isSorted(arr2, s2, 0) ? "true" : "false") << endl;
    return 0;
}