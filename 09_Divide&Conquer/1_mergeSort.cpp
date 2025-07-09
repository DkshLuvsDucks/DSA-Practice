#include<iostream>
#include<vector>
using namespace std;

void merge(int *arr, int si, int mid, int ei){
    vector<int> temp;
    int i = si;
    int j = mid+1;
    while(i <= mid && j <= ei){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }
    while(i <= mid){
        temp.push_back(arr[i++]);
    }
    while(j <= ei){
        temp.push_back(arr[j++]);
    }
    for(int idx=si, x=0; idx<=ei; idx++){
        arr[idx] = temp[x++];
    }
}

void mergeSort(int *arr, int si, int ei){
    if(si >= ei){
        return;
    }
    int mid = si + (ei - si)/2;
    mergeSort(arr, si, mid);
    mergeSort(arr, mid+1, ei);
    merge(arr, si, mid, ei);
}

void printArr(int *arr, int size){
    for(int i=0; i<=size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {6, 3, 7, 5, 2, 4};
    int size = sizeof(arr)/sizeof(int);

    cout << "Array before sorting:\n";
    printArr(arr, size-1);

    mergeSort(arr, 0, size-1);
    cout << "\nArray after sorting:\n";
    printArr(arr, size-1);
    return 0;
}