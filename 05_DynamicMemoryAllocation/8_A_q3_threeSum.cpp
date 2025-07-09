#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find all unique triplets that sum to zero
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    int n = nums.size();

    // Step 1: Sort the array so we can use the two-pointer technique
    sort(nums.begin(), nums.end());

    // Step 2: Fix the first number and use two pointers for the remaining two numbers
    for (int i = 0; i < n; i++) {
        // Skip duplicates for the first element to avoid repeated triplets
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int j = i + 1;      // Start of remaining subarray
        int k = n - 1;      // End of remaining subarray

        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];

            if (sum < 0) {
                j++; // We need a larger sum, so move the left pointer right
            } else if (sum > 0) {
                k--; // We need a smaller sum, so move the right pointer left
            } else {
                // Found a triplet that sums to zero
                ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;

                // Skip duplicates for the second and third elements
                while (j < k && nums[j] == nums[j - 1]) j++;
                while (j < k && nums[k] == nums[k + 1]) k--;
            }
        }
    }

    return ans;
}

int main() {
    vector<int> arr;
    int n;

    // Taking user input
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements separated by spaces:\n";
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        arr.push_back(input);
    }

    // Call the threeSum function
    vector<vector<int>> result = threeSum(arr);

    // Display the output
    cout << "Unique triplets that sum to zero:\n";
    if (result.empty()) {
        cout << "No triplets found.\n";
    } else {
        for (const auto& triplet : result) {
            cout << "[";
            for (int i = 0; i < triplet.size(); i++) {
                cout << triplet[i];
                if (i < triplet.size() - 1) cout << ", ";
            }
            cout << "]\n";
        }
    }

    return 0;
}
