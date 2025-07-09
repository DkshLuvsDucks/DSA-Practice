#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter Age : ";
    cin >> age;

    bool isAdult = (age >= 18) ? true : false;
    isAdult ? cout << "Adult" << endl : cout << "Not Adult" << endl;
   
    // if(isAdult){
    //     cout << "ADULT" << endl;
    // }
    // else{
    //     cout << "Not ADULT" << endl;
    // }
    
    return 0;
}