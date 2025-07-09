#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2*n; j++){
            if((i == 1) || (i == n)){
                cout << "* ";
            }
            else{
                if((j == 1) || (j == 2*n)) cout << "* ";
                else cout << "  ";
            }
        }   
        cout << endl;
    }
    return 0;
}