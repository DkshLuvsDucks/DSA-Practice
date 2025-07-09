#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool closeStrings(string word1, string word2) {
    // Check if lengths are different
    if (word1.size() != word2.size()) {
        return false;
    }
    
    int freq1[26] = {0};
    int freq2[26] = {0};
    
    // Count frequencies for each character
    for (char c : word1) {
        freq1[c - 'a']++;
    }
    for (char c : word2) {
        freq2[c - 'a']++;
    }
    
    // Check if both strings have the same set of characters
    for (int i = 0; i < 26; ++i) {
        if ((freq1[i] == 0) != (freq2[i] == 0)) {
            return false;
        }
    }
    
    // Sort the frequency arrays and compare
    sort(freq1, freq1 + 26);
    sort(freq2, freq2 + 26);
    
    for (int i = 0; i < 26; ++i) {
        if (freq1[i] != freq2[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string word1, word2;
    cout << "Enter first word: ";
    cin >> word1;
    cout << "Enter second word: ";
    cin >> word2;
    
    if (closeStrings(word1, word2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}
