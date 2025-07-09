#include<iostream>
using namespace std;

class Car{
private:
    string name;
    string color;

public:
    // Constructor
    Car(){
        // default non-parameterized constructor
    }

    Car(string name, string color){ // Parameterized constructor
        this->name = name;
        this->color = color;
    }

    // Getters
    string getName(){
        return name;
    }

    string getColor(){
        return color;
    }

    // Setters
    void setName(string name){
        this->name = name;
    }
    
    void setcolor(string color){
        this->color = color;
    }
    
};

int main(){
    Car c0;
    Car c1("Ford", "white");
    cout << "------------------\n" << "Original Details:\n" << "------------------\n";
    cout << "Name: " << c1.getName() << endl;
    cout << "Color: " << c1.getColor() << endl;
    cout << "------------------\n";

    // Updating details
    c1.setName("BMW");
    c1.setcolor("purple");
    
    cout << "Updated Details:\n" << "------------------\n";
    cout << "Name: " << c1.getName() << endl;
    cout << "Color: " << c1.getColor() << endl << "------------------\n";
    
    return 0;
}