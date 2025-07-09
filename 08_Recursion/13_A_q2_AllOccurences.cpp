#include<iostream>
using namespace std;

void findOccurences(int* arr, int i, int target, int size){
    if(i == size){
        cout << endl;
        return;
    } else {
        if (arr[i] == target){
            cout << i << " ";
        }
        findOccurences(arr, i+1, target, size);
    }
}

int main(){
    int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int size = sizeof(arr) / sizeof(int);
    cout << "Target = 2, Occurrences: ";
    findOccurences(arr, 0, 2, size);
    return 0;
}