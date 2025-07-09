// Question 3: Simple Interest Calculator; input principal (P), rate (R), time (T); output (P*R*T)/100.
#include <iostream>
using namespace std;

int main() {
    float principal, rate, time;

    //taking inputs
    cout << "Enter Principal : " ;
    cin >> principal ;
    
    cout << "Enter Rate : " ;
    cin >> rate ;
    
    cout << "Enter Time : " ;
    cin >> time ;
    
    // output + calculation
    float simple_interest = ( principal * rate * time ) / 100 ;
    cout << "Simple Interest = " <<  simple_interest << endl ;

    return 0;
}