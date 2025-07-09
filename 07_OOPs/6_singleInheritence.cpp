#include<iostream>
using namespace std;

class Animal{
public:
    string color;

    void eat(){
        cout << "eating..." << endl; 
    }

    void breathe(){
        cout << "breathing..." << endl; 
    }
};

// class Fish : public Animal {
// public:
//     int fins;

//     void swim(){
//         cout << "swiming..." << endl; 
//     }
// };

class Fish : protected Animal { // Single Inheritence
public:
    int fins;

    void swim(){
        breathe();
        cout << "swiming..." << endl; 
    }
};

int main(){
    Fish f1;
    f1.swim();
    // cant use these as it is inherited in protected mode
    // f1.breathe();
    // f1.eat();
    
    return 0;
}