#include<iostream>
using namespace std;

void findIdx(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            cout << "Element(" << key <<") found at index " << i << endl;
            return;
        }
    }
    cout << "Element(" << key <<") not found in array..." << endl;
}

int main(){
    int arr[] = {
        23, 87, 14, 66, 45, 99, 3, 58, 72, 41,
        29, 94, 11, 36, 77, 50, 2, 88, 62, 31,
        18, 70, 95, 9, 61, 80, 33, 21, 57, 13,
        76, 6, 38, 55, 26, 93, 68, 81, 16, 4,
        32, 40, 74, 85, 20, 12, 7, 97, 67, 5
        };
    int size = sizeof(arr) / sizeof(int);
    findIdx(arr, size, 12);
    findIdx(arr, size, 10);
    return 0;
}