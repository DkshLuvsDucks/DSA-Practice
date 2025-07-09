#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// T(n) = O(n * log n)
bool isValidAnagram_method_1(string str1, string str2){
    if(str1.length() != str2.length())
        return false;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}

// T(n) = O(n)
bool isValidAnagram_method_2(string str1, string str2){
    if(str1.length() != str2.length())
        return false;
    
    int count[26] = {0};    
    for(int i=0; i<str1.length(); i++){
        count[str1[i]-'a']++;
    }
    for(int i=0; i<str2.length(); i++){
        if(count[str2[i]-'a'] == 0){
            return false;
        }
        count[str2[i]-'a']--;
    }
    return true;
}

int main(){
    string str1 = "lana";
    string str2 = "aanl";
    isValidAnagram_method_1(str1, str2) ? cout << "YES\n" : cout << "NO\n";
    isValidAnagram_method_2(str1, str2) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}