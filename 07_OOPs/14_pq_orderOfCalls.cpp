#include<iostream>
using namespace std;

class Parent{
public:
    Parent(){
        cout << "Parent Constructor...\n";
    }
    ~Parent(){
        cout << "Parent Destructor...\n";
    }
};

class Child : public Parent{
public:
    Child(){
        cout << "Child Constructor...\n";
    }
    ~Child(){
        cout << "Child Destructor...\n";
    }
};

int main(){
    Child c1;
    /*
    Expected Outcome:
    Parent Constructor...
    Child Constructor...
    Child Destructor...
    Parent Destructor...
    */
    return 0;
}