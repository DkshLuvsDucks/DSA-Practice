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

class Mammal : public Animal{
public:
    string bloodtype;
    
    Mammal(){
        this->bloodtype = "warm";
    }
};

class Dog : public Mammal{
public:
    void wagTail(){
        cout << "*wags tail..." << endl;
    }
};


int main(){
    Dog d1;
    d1.wagTail();
    d1.eat();
    d1.breathe();
    cout << "bloodType = " << d1.bloodtype << endl;
    return 0;
}