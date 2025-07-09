#include<iostream>
using namespace std;

int main(){
    do{
        int num;
        cout << "Enter Num : ";
        cin >> num;
        if(num % 10 == 0){
            continue;
        }
        cout << "you entered " << num << endl;
    } while (true);
    cout << "out of loop" << endl;
    return 0;
}