#include <iostream>
using namespace std;

void sayHello(){
    cout << "Hello everynyan~" <<endl;
}

void helper(){
    sayHello();
    cout << "task done successfully..." << endl;
}

int main(){
    helper();
    return 0;
}