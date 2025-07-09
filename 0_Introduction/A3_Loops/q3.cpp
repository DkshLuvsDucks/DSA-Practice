#include<iostream>
using namespace std;

int main(){
    int num, numcpy, sumofCubes = 0;
    cout << "Enter a Number : ";
    cin >> num;
    numcpy = num;

    while(numcpy > 0){
        int lastDig = numcpy % 10;
        sumofCubes += (lastDig * lastDig * lastDig);
        numcpy /= 10;
    }

    (num == sumofCubes) ? cout << "ARMSTRONG NUMBER" << endl : cout << "NOT AN ARMSTRONG NUMBER..." << endl;

    return 0;

}