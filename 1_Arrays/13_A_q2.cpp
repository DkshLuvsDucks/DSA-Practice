#include<iostream>
using namespace std;

int findPivotIndex(int *arr, int size, int target){
    int start = 0, end = size - 1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            return mid;
        }
        
        if (arr[start] <= arr[mid]){
            if (arr[start] <= target && target < arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        else{
            if (arr[mid] < target && target <= arr[end]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter Number of Elements : ";
    cin >> n;
    
    int arr[n];
    cout << "Enter array elements (w spaces) : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int target;
    cout << "Enter the pivot point : ";
    cin >> target;

    int idx = findPivotIndex(arr, n, target);
    if(idx != -1){
        cout << "Pivot found at idx : " << idx << "\n";
    }
    else{
        cout << "Pivot not found...\n";
    }
    return 0;
}