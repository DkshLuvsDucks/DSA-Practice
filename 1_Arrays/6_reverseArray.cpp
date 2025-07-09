#include<iostream>
using namespace std;

void printArr(int arr[], int size){
   for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
   }
   cout << endl;
}

void reverse_method1(int arr[], int size){
    int copyArr[size];
    
    for(int i = 0; i < size; i++){
        int j = size - i - 1;
        copyArr[i] = arr[j];
    }

    for(int i = 0; i < size; i++){
        arr[i] = copyArr[i];
    }
}

void reverse_method2(int arr[], int size){
    int start = 0, end = size - 1;
    while (start <= end){
        swap(arr[start++], arr[end--]);
        /*
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++ ; end--;
        */
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(int);
    cout << "# Before Reversing Array :" << endl;
    printArr(arr,size);
    reverse_method1(arr,size);
    cout << "# After Reversing Array (method #1 : extra space) :" << endl;
    printArr(arr,size);

    cout << endl << "# Before Reversing Array :" << endl;
    printArr(arr,size);
    reverse_method2(arr,size);
    cout << "# After Reversing Array (method #2 : swap) :" << endl;
    printArr(arr,size);

    return 0;
}