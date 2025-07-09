#include<iostream>
#include<vector>
using namespace std;

int findMaxWater(vector<int>& heights){
    int left = 0, right = heights.size() - 1;
    int maxArea = 0;
    while(left < right){
        int currArea = min(heights[left], heights[right]) * (right - left);
        maxArea = max(currArea, maxArea);
        if(heights[left] < heights[right]){
            left++;
        } else {
            right--;
        }
    }
    return maxArea;
}

int main(){
    vector<int> heights;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter array elements w spaces: \n";
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        heights.push_back(input);
    }
    cout << "Max Water = " << findMaxWater(heights) << endl;
    return 0;
}