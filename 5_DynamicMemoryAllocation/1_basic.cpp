#include<iostream>
using namespace std;

int* memoryLeak(){
    int* ptr = new int;
    *ptr = 1344;
    cout << "ptr points to " << *ptr << endl;
    return ptr;
}

int main(){
    // static memory allocation
    int arr[] = {1,2,3,4};

    //dynamic memory allocation
    int size;
    cin >> size;
    int *arr2 = new int[size];

    for(int i = 0; i < size; i++){
        arr2[i] = i + 1;
        cout << arr2[i] << " ";
    }
    cout << endl;

    delete [] arr2; // free allocated memory
    
    //if we do not delete memory it will stay in memory heap
    int* x = memoryLeak();
    cout << x << " = " << *x << endl;
    // the data persists in memory heap and is still accessible through the returned
    // pointer, always free up memory....
    return 0;
}