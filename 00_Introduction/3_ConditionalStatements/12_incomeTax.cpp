#include<iostream>
using namespace std;

int main(){
    float income_in_lacs, tax;
    cout << "Enter income (in Lakhs) : ";
    cin >> income_in_lacs;

    if(income_in_lacs < 5){
        tax = 0;
    }
    else if (income_in_lacs <= 10){
        tax = 0.2 * income_in_lacs;
    }
    else{
        tax = 0.3 * income_in_lacs;
    }

    cout << "Tax to be paid : " << (tax * 100000) << endl;

    return 0;
}