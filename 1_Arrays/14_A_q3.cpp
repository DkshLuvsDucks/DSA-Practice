#include<iostream>
#include<limits.h>
using namespace std;

void findMaxProduct(int *arr, int size) {
    if (size == 0) {
        cout << "Max Subarray Product = 0\n";
        return;
    }
    int maxTillNow = arr[0];
    int minTillNow = arr[0];
    int ans = maxTillNow;

    for (int i = 1; i < size; i++) {
        int curr = arr[i];

        int tempMaxTillNow = max(curr, max(maxTillNow * curr, minTillNow * curr));
        minTillNow = min(curr, min(maxTillNow * curr, minTillNow * curr));
        maxTillNow = tempMaxTillNow;

        ans = max(maxTillNow, ans);
    }

    cout << "Max Subarray Product = " << ans << "\n";
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
    
    findMaxProduct(arr, n);

    return 0;
}