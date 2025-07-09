#include<iostream>
using namespace std;

class A{
private:
    string secret = "secret string...\n";
    friend class B;
    friend void revealSecret(A &obj);
};

class B{
public:
    void printSecret(A &obj){
        cout << obj.secret ;
    }
};

void revealSecret(A &obj){
    cout << obj.secret ;
}

int main(){
    A a;
    B b;
    b.printSecret(a);
    revealSecret(a);
    return 0;
}