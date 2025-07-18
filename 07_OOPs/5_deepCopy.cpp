#include<iostream>
using namespace std;

class Car{
public:
    string name;
    string color;
    int* mileage;
    
    Car(string name, string color){
        this->name = name;
        this->color = color;
        this->mileage = new int;
        *mileage = 12;  
    }

    // Custom copy constructor
    Car (Car &original){
        this->name = original.name;
        this->color = original.color;
        mileage = new int;
        *this->mileage = *original.mileage; // deep copy
    }

    ~Car(){
        cout << "Object Deleted..." << endl;
        if(mileage != NULL){
            delete mileage;
            mileage = NULL;
        }
    }

};

int main(){
    Car c1("Ford", "purple");
    Car c2(c1); // copying constructor
    cout << "# Copied Car2\n";
    cout << "Name: " << c2.name << endl;
    cout << "Color: " << c2.color << endl;
    cout << "Mileage: " << *c2.mileage << endl;
    cout << "# Updating Car2 Mileage\n";
    *c2.mileage = 20;
    cout << "Mileage (c2): " << *c2.mileage << endl;
    cout << "Mileage (c1): " << *c1.mileage << endl; // c1 did not change because deep copy was made
    
    return 0;
}