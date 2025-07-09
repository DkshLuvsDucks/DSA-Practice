#include <iostream>
using namespace std;

// Helper function to count how many times 'num' appears in nums[lo..hi]
int countInRange(int nums[], int num, int lo, int hi) {
    int count = 0;
    for (int i = lo; i <= hi; i++) {
        if (nums[i] == num) {
            count++;
        }
    }
    return count;
}

// Recursive function to find majority element in nums[lo..hi]
int majorityElementRec(int nums[], int lo, int hi) {
    // Base case: only one element
    if (lo == hi) {
        return nums[lo];
    }

    int mid = lo + (hi - lo) / 2;

    // Recur on left and right halves
    int left = majorityElementRec(nums, lo, mid);
    int right = majorityElementRec(nums, mid + 1, hi);

    // If both halves agree
    if (left == right) return left;

    // Otherwise, count each and return the one with higher count
    int leftCount = countInRange(nums, left, lo, hi);
    int rightCount = countInRange(nums, right, lo, hi);

    return leftCount > rightCount ? left : right;
}

// Main function
int majorityElement(int nums[], int n) {
    return majorityElementRec(nums, 0, n - 1);
}

int main() {
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << "Majority Element: " << majorityElement(nums, n) << endl;
    return 0;
}
