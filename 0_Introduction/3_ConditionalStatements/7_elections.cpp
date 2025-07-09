#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age : " ;
    cin >> age;
    if (age >= 18){
        cout << "You can vote!" << endl ;
    }
    else{
        cout << "You need to be atleast 18 to vote" << endl ;
    }
    if (age >= 45){
        cout << "You can also contest for elections!" << endl;
    }
    return 0;
}