#include<iostream>
using namespace std;

void printArr(char *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " " ;
    }   
    cout << endl;
}

// T(n) = O(n^2)
void insertionSort(char *arr, int size){
    for(int i = 1; i < size; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] < curr){
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

int main(){
    char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    int size = sizeof(ch) / sizeof(char);
    
    cout << "Array before sorting:\n";
    printArr(ch, size);
    insertionSort(ch, size);
    cout << "\nArray after sorting:\n";
    printArr(ch, size);
    
    return 0;
}