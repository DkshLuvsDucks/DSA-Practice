#include <iostream>
#include <string>
using namespace std;

bool isValid(string s) {
    int n = s.length();
    char stack[10000]; // Max size as per constraints
    int top = -1;

    for (char c : s) {
        // Only process bracket characters
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c; // Push to stack
        } else if (c == ')' || c == '}' || c == ']') {
            if (top == -1) return false; // No matching opening bracket
            char open = stack[top--];    // Pop from stack
            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{')) {
                return false; // Mismatched pair
            }
        }
        // Ignore all other characters (spaces, letters, etc.)
    }
    return top == -1; // Stack should be empty if valid
}

int main() {
    string s;
    cout << "Enter parentheses string: ";
    getline(cin, s); // Use getline to allow spaces and other chars

    if (isValid(s))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
