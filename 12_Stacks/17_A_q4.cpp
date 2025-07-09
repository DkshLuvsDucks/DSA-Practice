#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int trapRainWater(vector<int>& height) {
    int n = height.size();
    stack<int> st;
    int waterTrapped = 0;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && height[i] > height[st.top()]) {
            int bottom = st.top();
            st.pop();
            if (st.empty()) break;

            int left = st.top();
            int width = i - left - 1;
            int boundedHeight = min(height[i], height[left]) - height[bottom];
            waterTrapped += width * boundedHeight;
        }
        st.push(i);
    }

    return waterTrapped;
}

int main() {
    vector<int> height = {7, 0, 4, 2, 5, 0, 6, 4, 0, 5};
    cout << trapRainWater(height) << endl;  // Output: 25
    return 0;
}
