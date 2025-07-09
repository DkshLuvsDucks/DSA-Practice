#include<iostream>
using namespace std;

int main(){
    int n;
    bool isPrime = true;
    cout << "Enter Number : ";
    cin >> n;
    
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime) cout << n << " is a Prime Number...";
    else cout << n << " is NOT a Prime Number...";
    
    return 0;
}