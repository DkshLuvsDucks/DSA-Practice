#include <iostream>
#include <stack>
#include <string>
using namespace std;

string decodeString(string s) {
    stack<int> countStack;
    stack<string> strStack;
    string current = "";
    int num = 0;

    for (char ch : s) {
        if (isdigit(ch)) {
            num = num * 10 + (ch - '0');
        } 
        else if (ch == '[') {
            countStack.push(num);
            strStack.push(current);
            num = 0;
            current = "";
        } 
        else if (ch == ']') {
            int repeat = countStack.top(); countStack.pop();
            string prev = strStack.top(); strStack.pop();
            string repeated = "";
            for (int i = 0; i < repeat; i++) {
                repeated += current;
            }
            current = prev + repeated;
        } 
        else {
            current += ch;
        }
    }

    return current;
}

int main() {
    string input1 = "3[a]2[bc]";
    string input2 = "2[abc]3[cd]ef";

    cout << decodeString(input1) << endl;  // Output: aaabcbc
    cout << decodeString(input2) << endl;  // Output: abcabccdcdcdef

    return 0;
}
