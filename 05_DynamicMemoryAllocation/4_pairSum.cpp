#include<iostream>
#include<vector>
using namespace std;

// T(n) = O(n^2)
vector<int> findPairSum_bruteforce (vector<int> arr, int target){
    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            if((arr[i] + arr[j]) == target){
                vector<int> sol = {i, j};
                return sol;
            }
        }   
    }
}

// T(n) = O(n)
// 2 Pointer Approach
vector<int> findPairSum (vector<int> arr, int target){
    int start = 0, end = (arr.size() - 1);
    int currSum = 0;
    vector<int> ans;
    while(start < end){
        currSum = arr[start] + arr[end];
        if(currSum == target){
                ans.push_back(start);
                ans.push_back(end);
                return ans;
        }
        else if(currSum > target){
            end--;
        } else {
            start++;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {0, 1, 2, 7, 11, 15};
    int targetSum = 9;
    vector<int> sol1 = findPairSum_bruteforce(arr, targetSum);
    cout << "Bruteforce Solution : " << sol1[0] << ", " << sol1[1] << endl;
    vector<int> sol2 = findPairSum(arr, targetSum);
    cout << "Linear Solution (2 pointer approach) : " << sol1[0] << ", " << sol1[1] << endl;
    return 0;
}