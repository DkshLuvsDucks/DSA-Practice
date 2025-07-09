#include<iostream>
#include<limits.h>
using namespace std;

// METHOD #1 : Bruteforcing (NOT OPTIMAL)
// T(n) = O(n^3)
void method_1_MaxSubarraySum (int *arr, int size){
    int maxSubarraySum = INT_MIN;
    for(int start = 0; start < size; start++){
        for(int end = start; end < size; end++){
            int subarraySum = 0;
            for(int i = start; i <= end; i++){    
                subarraySum += arr[i];
            }
            maxSubarraySum = max(subarraySum, maxSubarraySum);
            // if(subarraySum > max){
            //     max = subarraySum;
            // }
        }
    }
    cout << "Method #1 : Bruteforcing\n";
    cout << "Max Subarray Sum = " << maxSubarraySum << "\n\n";
}

// METHOD #2 : slight optimization
// T(n) = O(n^2)
void method_2_MaxSubarraySum (int *arr, int size){
    int maxSubarraySum = INT_MIN;
    for(int start = 0; start < size; start++){
        int subarraySum = 0;
        for(int end = start; end < size; end++){
            subarraySum += arr[end];
            maxSubarraySum = max(subarraySum, maxSubarraySum);
        }
    }
    cout << "Method #2 : Optimized Bruteforce\n";
    cout << "Max Subarray Sum = " << maxSubarraySum << "\n\n";
}

// METHOD #3 : Kadane's Algorithm (OPTIMAL)
// T(n) = O(n)
void method_3_MaxSubarraySum (int *arr, int size){
    int maxSubarraySum = INT_MIN;
    int subarraySum = 0;
    for(int i = 0; i < size; i++){
        subarraySum += arr[i];
        maxSubarraySum = max(subarraySum, maxSubarraySum);
        if(subarraySum < 0){
            subarraySum = 0;
        }
    }
    cout << "Method #3 : Kadane's Algorithm\n";
    cout << "Max Subarray Sum = " << maxSubarraySum << "\n\n";
}



int main(){
    int arr[] = {2, -3, 6, -5, 4, 2};
    int size = sizeof(arr) / sizeof(int);

    method_1_MaxSubarraySum(arr, size);
    method_2_MaxSubarraySum(arr, size);
    method_3_MaxSubarraySum(arr, size);

    return 0;
}