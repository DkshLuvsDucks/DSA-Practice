#include<iostream>
using namespace std;

void clearBitRange(int num, int i, int j){
    // Create mask with 0s from i to j
    int left = (~0) << (j + 1);       // All 1s except 0s from 0 to j
    int right = (1 << i) - 1;         // 1s from 0 to i-1
    int bitmask = left | right;       // Combine both

    int result = num & bitmask;       // Clear bits i to j
    cout << "After clearing bits " << i << " to " << j << ": " << result << endl;
    
}

 /*
 Dry Run Example:
----------------
num = 15          => 0000 1111 (binary)
i = 1, j = 3

Step 1: (~0) << (j + 1)
        left = 1111 0000

Step 2: (1 << i) - 1
        right = 0000 0001

Step 3: bitmask = left | right
      1111 0000
    | 0000 0001
    = 1111 0001

Final Bitmask: 1111 0001

Step 4: num & bitmask
        0000 1111   (15)
      & 1111 0001   (bitmask)
      = 0000 0001   => 1

So, the final result is 1.

*/

int main(){
    clearBitRange(15, 1, 3);  // Output: 1
    clearBitRange(31, 1, 3);  // Output: 17
    return 0;
}