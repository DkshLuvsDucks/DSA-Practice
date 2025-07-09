#include<iostream>
using namespace std;

void printAllSubsets(string str, string subset){
    if(str.size() == 0){
        cout << subset << "\n";
        return;
    }

    char ch = str[0];

    // yes choice
    printAllSubsets(str.substr(1, str.size()-1), subset+ch);
    // no choice
    printAllSubsets(str.substr(1, str.size()-1), subset);
    
}

int main(){
    string str = "abc";
    string subset = "";
    printAllSubsets(str, subset);
    return 0;
}