#include<iostream>
using namespace std;

// T(n) = O(n + n + n) = O(3n) = O(n)
void trapwater(int *heights, int size){
    int leftMax[size];
    int rightMax[size];
    leftMax[0] = heights[0];
    rightMax[size - 1] = heights[size - 1];
    //setting up leftMax vals
    for(int  i = 1; i < size; i++){
        leftMax[i] = max(leftMax[i-1], heights[i-1]);
    }
    //setting up rightMax vals
    for(int  i = size - 2; i >= 0; i--){
        rightMax[i] = max(rightMax[i+1], heights[i+1]);
    }

    int waterTrapped = 0;
    for(int i = 0; i < size; i++){
        int currWater = min(leftMax[i], rightMax[i]) - heights[i];
        if(currWater > 0){
            waterTrapped += currWater;
        }

    }
    cout << "Total water trapped = " << waterTrapped << endl;
}

int main(){
    int heights[] = {4, 2, 0, 6, 3, 2, 5};
    int size = sizeof(heights) / sizeof(int);
    trapwater(heights, size);
    
    int heights2[] = {5, 4, 3, 2, 1};
    int size2 = sizeof(heights2) / sizeof(int);
    trapwater(heights2, size2);
    
    return 0;
}