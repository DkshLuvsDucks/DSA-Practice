#include<iostream>
using namespace std;

/*
a - z : 97 to 122
A - Z : 65 - 90
*/
void toUpper(char *str){
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 97 && str[i] <= 122){
            str[i] = str[i] - 'a' + 'A';
        }
        i++;
    }
}

void toLower(char *str){
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 65 && str[i] <= 90){
            str[i] = str[i] - 'A' + 'a';
        }
        i++;
    }
}

int main(){
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str,200);
    cout << "Before Conversion:\n";
    cout << str << endl;

    toUpper(str);
    cout << "\nAfter Conversion(UPPER):\n";
    cout << str << endl;
    
    toLower(str);
    cout << "\nAfter Conversion(lower):\n";
    cout << str << endl;
    
    return 0;
}