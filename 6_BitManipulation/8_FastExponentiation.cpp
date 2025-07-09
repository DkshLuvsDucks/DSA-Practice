#include<iostream>
using namespace std;

void fastExpo(int num, int n){
    int ans = 1;
    cout << num << "^" << n << " = ";
    while (n > 0){
        int lastBit = n & 1;
        if(lastBit){
            ans = ans * num;
        }
        num = num * num;
        n = n >> 1;
    }
    cout << ans << endl;
}

int main(){
    fastExpo(3, 5);
    fastExpo(2, 5);
    fastExpo(2, 4);
    
    return 0;
}