#include<iostream>
using namespace std;

class Parent{
public:
    virtual void print(){
        cout << "Parent\n";
    }
};

class Child : public Parent{
public:
    void print(){
        cout << "Child\n";
    }
};

int main(){
    Parent *p = new Child();
    p->print(); // will print child since we assigned a child object and it overrides the print func
    delete p;
    return 0;
}