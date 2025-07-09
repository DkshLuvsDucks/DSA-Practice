#include<iostream>
#include<algorithm>
using namespace std;

void printArr(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);
    
    cout << "Array before sorting:\n";
    printArr(arr, size);
    // ASCENDING ORDER
    sort(arr, arr + size);
    cout << "\nArray after sorting(asc):\n";
    printArr(arr, size);
    // DESCENDING ORDER
    sort(arr, arr + size, greater<int>());
    cout << "\nArray after sorting(desc):\n";
    printArr(arr, size);
    return 0;
}