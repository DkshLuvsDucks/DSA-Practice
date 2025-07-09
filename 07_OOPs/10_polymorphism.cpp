#include<iostream>
using namespace std;

/*
# Compile time Polymorphism:
1.) Function Overloading
2.) Operator Overloading

# Run Time Polymorphism:
1.) Function Overriding
2.) Virtual Functions
*/


// Function Overloading
class Print{
public:
    // Function Overloading
    void show(int x){
        cout << "int: " << x << endl;
    }
    void show(string str){
        cout << "string: " << str << endl;
    }
};

// Operator Overloading
class Complex{
    int real;
    int img;

public:
    Complex(int r, int i){
        real = r;
        img = i;
    }

    void showNum(){
        cout << real << " + " << img << "i" << endl;
    }

    Complex operator + (Complex &obj){
        int resReal = this->real + obj.real;
        int resImg = this->img + obj.img;
        Complex num(resReal,resImg);
        return num;
    }

    Complex operator - (Complex &obj){
        int resReal = this->real - obj.real;
        int resImg = this->img - obj.img;
        Complex num(resReal,resImg);
        return num;
    }
};

// # Runtime Polymorphism
// Function Overloading
class Parent{
public:
    void show(){
        cout << "inside parent class..." << endl;
    }
    virtual void hello(){
        cout << "parent hello..." << endl;
    }
};

class Child : public Parent{
public:
    void show(){
        cout << "inside child class..." << endl;
    }
    void hello(){
        cout << "child hello..." << endl;
    }
};


int main(){
    // Compile time
    Print obj1;
    obj1.show(13);
    obj1.show("Hello World!");
    
    Complex c1(1,2);
    Complex c2(3,4);
    c1.showNum();
    c2.showNum();

    Complex c3 = c1 + c2;
    c3.showNum();

    Complex c4 = c2 - c1;
    c4.showNum();

    // Runtime
    Child ch1;
    ch1.show();

    Child ch2;
    Parent* ptr;
    ptr = &ch2; // Runtime binding
    ptr->hello(); // virtual function
    return 0;
}