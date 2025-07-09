#include<iostream>
using namespace std;

// static variable in a function
void counter(){
    static int count = 0; // initialized once only and stays in memory
    count++;
    cout << "count: " << count << endl;
}


// static variable in a class
class Student{
public:
    static int total;
    Student(){
        cout << "constructor called...\n";
        total++;
    }
    ~Student(){
        cout << "destructor called...\n";
        total--;
    }
    void printTotal(){
        cout << total << endl;
    }
};

// Static variables cant be initialised inside a class, do it this way
int Student :: total = 0; // this variable will be shared by all objects

int main(){
    counter();
    counter();
    counter();
    counter();
    counter();
    
    Student s1;
    s1.printTotal();
    Student s2;
    s2.printTotal();
    Student s3;
    s3.printTotal();

    if(1){
        Student s4;
        s4.printTotal();
        static Student s5;
        s5.printTotal();
    }
    
    cout << "End of Program..." << endl;
    
    return 0;
}