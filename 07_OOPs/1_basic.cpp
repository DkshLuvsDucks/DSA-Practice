#include<iostream>
using namespace std;

class Student{
private: // access modifier
    float cgpa;

public:
    string name;

    //getters
    void getPercentage(){
        cout << (cgpa * 10) << "%" << endl;
    }

    void getName(){
        cout << name << endl;
    }

    // setters
    void setCgpa(float cgpa){
        this->cgpa = cgpa;
    }
    
    void setName(string name){
        this->name = name;
    }

};

int main(){
    Student s1;
    s1.name = "Daksh";
    s1.setCgpa(7.17);
    s1.getName();
    s1.setName("Devesh");
    s1.getName();
    s1.getPercentage();
    return 0;
}