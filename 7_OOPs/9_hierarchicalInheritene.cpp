#include<iostream>
using namespace std;

class Animal{
public:
    void eat(){
        cout << "eating..." << endl; 
    }

    void breathe(){
        cout << "breathing..." << endl; 
    }
};

class Birds : public Animal{
public:
    void fly(){
        cout << "flying..." << endl; 
    }
};

class Fish : public Animal{
public:
    void swim(){
        cout << "swimming..." << endl; 
    }
};

class Mammal : public Animal{
public:
    void walk(){
        cout << "walking..." << endl; 
    }
};


int main(){
    Birds b1;
    b1.breathe();
    b1.eat();
    b1.fly();

    Fish f1;
    f1.breathe();
    f1.eat();
    f1.swim();

    Mammal m1;
    m1.breathe();
    m1.eat();
    m1.walk();
    
    return 0;
}