#include<iostream>
#include<algorithm>
using namespace std;

bool containsDuplicate (int *arr, int n){
    sort(arr, arr + n);

    for (int i = 1; i < n; i++){
        if (arr[i-1] == arr[i]){
            return true;
        }
    }
    
    return false;
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
    
    if(containsDuplicate(arr, n)){
        cout << "Array contains Duplicates..." << endl;
    }
    else{
        cout  << "Array contains Distinct Elements!" << endl;
    }
    return 0;
}