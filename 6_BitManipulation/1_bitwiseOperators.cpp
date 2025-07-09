#include<iostream>
using namespace std;

int main(){
    cout << "& operations-\n";
    cout << "0 & 1 = " << (0 & 1) << endl;
    cout << "1 & 1 = " << (1 & 1) << endl;
    /*
    3 = 0011
    5 = 0101
    --------
        0001
    --------
    */
    cout << "3 & 5 = " << (3 & 5) << endl; 

    cout << "\n| operations-\n";
    cout << "0 | 0 = " << (0 | 0) << endl;
    cout << "0 | 1 = " << (0 | 1) << endl;
    cout << "1 | 1 = " << (1 | 1) << endl;
    
    cout << "\n^ operations-\n";
    cout << "0 ^ 0 = " << (0 ^ 0) << endl;
    cout << "0 ^ 1 = " << (0 ^ 1) << endl;
    cout << "1 ^ 1 = " << (1 ^ 1) << endl;
    
    cout << "\n~ binary not operation-\n";
    cout << "~0 = " << (~0) << endl;
    cout << "~1 = " << (~1) << endl;
    /*
    00000001
    1s complement = 11111110
    (1) msb signifies negative number
    rest bits = 1111110
    1s complement = 0000001
    add 1 = 0000001 + 1 = 00000010 = 2 (in decimal system)
    and since it is negative, ans = -2
    */
    cout << "~4 = " << (~4) << endl;
    /*
    00000100
    1s complement = 11111011
    (1) msb signifies negative number
    rest bits = 1111011
    1s complement = 0000100
    add 1 = 0000100 + 1 = 0000101 = 5 (in decimal system)
    and since it is negative, ans = -5
    */

    // a >> b , is basically a / 2^b
    cout << "\n>> right shift operation-\n";
    cout << "20 >> 2 = " << (20>>2) << endl;
    cout << "8 >> 1 = " << (8>>1) << endl;

    // a >> b , is basically a * 2^b
    cout << "\n<< left shift operation-\n";
    cout << "20 << 2 = " << (20<<2) << endl;
    cout << "8 << 1 = " << (8<<1) << endl;

    return 0;
}