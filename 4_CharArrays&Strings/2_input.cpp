#include<iostream>
using namespace std;

int main(){
    char word[10];
    cout << "Enter Word : ";
    cin >> word; // cant take string inputs with spaces
    cout << "Your word was : " << word << endl;
    cin.ignore(10000, '\n'); // <-- This clears the leftover newline from buffer
    /*
    // other way of clearing buffer 
    char ch;
    while ((ch = cin.get()) != '\n' && ch != EOF);
    */
    char string[200];
    cout << "Enter A String : ";
    cin.getline(string, 200);
    cout << "Your string was : " << string << endl;

    char string2[200];
    cout << "Enter A String : ";
    cin.getline(string2, 200, '*'); // delimiter  
    cout << "Your string was : " << string2 << endl;

    return 0;
}