#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,20,100,34,35,69,70,90,101,200};
    int max = arr[0];
    int min = arr[0];
    int len = sizeof(arr) / sizeof(int);
    for(int i = 0; i < len; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "MAX = " << max << endl;
    cout << "MIN = " << min << endl;
    return 0;
}