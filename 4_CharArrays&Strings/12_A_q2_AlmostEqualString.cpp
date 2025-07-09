#include<iostream>
#include<string>
using namespace std;

bool isAlmostEqual(string s1, string s2){
    if(s1.length() != s2.length()) {
        return false;
    }
    
    char diffChar1, diffChar2;
    int diff = 0;
    for(int i=0; i<s1.length(); i++) {
        if(s1[i] != s2[i]) {
            if(!diff) {
                diffChar1 = s1[i];    // Store first difference
                diffChar2 = s2[i];
            } else {
                // Check if second difference can be resolved by swapping
                if(s1[i] != diffChar2 || s2[i] != diffChar1) {
                    return false;
                }
            }
            diff++;
        }
    }
    
    if(diff > 2) return false;    // Too many differences
    if(diff == 1) return false;   // Can't fix single difference with swap
    
    return true;  // 0 or 2 valid differences
}

int main(){
    string s1, s2;
    cout << "Enter String 1: ";
    getline(cin,s1);
    cout << "Enter String 2: ";
    getline(cin,s2);
    isAlmostEqual(s1,s2) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}