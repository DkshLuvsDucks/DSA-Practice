#include<iostream>
using namespace std;

void printSubArray(int *array, int size){
    for(int start = 0; start < size; start++){
        for(int end = start; end < size; end++){
            for(int i = start; i <= end; i++){    
                cout << array[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(int);
    printSubArray(array, size);
    return 0;
}