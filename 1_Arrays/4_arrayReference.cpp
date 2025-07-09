#include<iostream>
using namespace std;

void func(int arr[]){
    arr[0] = 1000;
}

void func2(int *ptr){
    ptr[0] = 2000;
}

void printArr(int arr[], int size){
    /*
    // ALWAYS PASS SIZE OF ARRAY, YOU CANT COMPUTE SIZE SINCE AN ARRAY POINTER IS PASSED NOT THE WHOLE ARRAY
    int len = sizeof(arr) / sizeof(int);
    */
   for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
   }
   cout << endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/ sizeof(int);
    cout << arr << endl; // prints address of first element in the contiguous memory space
    cout << *(arr) << endl; // prints arr[0]
    cout << *(arr + 1) << endl; // prints arr[1]
    cout << *(arr + 2) << endl; // prints arr[2]
    cout << *(arr + 3) << endl; // prints arr[3]
    cout << *(arr + 4) << endl; // prints arr[4]

    cout << endl << "arr[0] = " << arr[0] << " (before calling func)" << endl;
    func(arr); // passing array name is eq. to passing array pointer
    cout << "arr[0] = " << arr[0] << " (after calling func)" << endl;
    func2(arr); // passing array name is eq. to passing array pointer
    cout << "arr[0] = " << arr[0] << " (after calling func2)" << endl;
    printArr(arr,len);
    return 0;
}