#include <iostream>
using namespace std;

const long long MOD = 1e9 + 7;

// Fast power function: (a^b) % MOD
long long power(long long a, long long b) {
    if (b == 0) return 1;
    
    long long half = power(a, b / 2);
    long long result = (half * half) % MOD;

    if (b % 2 == 1) {
        result = (result * (a % MOD)) % MOD;
    }

    return result;
}

int countGoodNumbers(long long n) {
    long long even_digits = (n + 1) / 2;  // even indices: 0, 2, 4, ...
    long long odd_digits = n / 2;         // odd indices: 1, 3, 5, ...
    
    long long good_even = power(5, even_digits);  // 0,2,4,6,8 -> 5 choices
    long long good_odd = power(4, odd_digits);    // 2,3,5,7 -> 4 choices
    
    return (good_even * good_odd) % MOD;
}

int main() {
    long long n;
    cin >> n;
    cout << countGoodNumbers(n) << endl;
    return 0;
}
