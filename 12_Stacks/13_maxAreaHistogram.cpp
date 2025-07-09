#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void maxArea(vector<int> heights){
    vector<int> nsl(heights.size()); //next smallest left
    vector<int> nsr(heights.size()); //next smallest right
    stack<int> s;

    // next smaller left
    nsl[0] = -1;
    s.push(0);
    for(int i=1; i<heights.size(); i++){
        int curr = heights[i];
        while(!s.empty() && curr <= heights[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nsl[i] = -1;
        } else {
            nsl[i] = s.top();
        }
        s.push(i);
    }

    while(!s.empty()){
        s.pop();
    }

    // next smaller right
    int n = heights.size()-1;
    s.push(n);
    nsr[n] = n;
    for(int i=n-1; i>=0; i--){
        int curr = heights[i];
        while(!s.empty() && curr <= heights[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nsr[i] = n;
        } else {
            nsr[i] = s.top();
        }
        s.push(i);
    }
    
    int maxArea = 0;

    for(int i=0; i<heights.size(); i++){
        int ht = heights[i];
        int width = nsr[i] - nsl[i] - 1;
        int area = ht * width;
        maxArea = max(area, maxArea);
    }
    cout << "Max Area = " << maxArea << endl;
}

int main(){
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    maxArea(heights);
    return 0;
}