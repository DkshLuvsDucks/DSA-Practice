#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    // array inputs
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter Element : ";
        cin >> arr[i];
    }

    // printing array
    int len = sizeof(arr) / sizeof(int);    // u can use this as well for calculating length of array
    cout << endl << "# Elements in Array are : " << endl;
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}