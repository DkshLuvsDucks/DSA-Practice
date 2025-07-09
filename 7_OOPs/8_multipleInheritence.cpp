#include<iostream>
using namespace std;

class Teacher{
public:
    int salary;
    string subject;
};

class Student{
public:
    int roll;
    float cgpa;
};

class TA : public Teacher, public Student{
public:
    string name;

    TA(string name, int roll, float cgpa, int salary, string subject){
        this->name = name;
        this->roll = roll;
        this->cgpa = cgpa;
        this->salary = salary;
        this->subject = subject;
    }

    void printDetails(){
        cout << "----------------\n";
        cout << "# TA - Details\n";
        cout << "----------------\n";
        cout << "name: " << name << endl;
        cout << "roll: " << roll << endl;
        cout << "cgpa: " << cgpa << endl;
        cout << "salary: " << salary << endl;
        cout << "subject: " << subject << endl;
        cout << "----------------\n";
    }

};


int main(){
    TA t1("Daksh", 2022142, 7.17, 30000, "DDV");
    t1.printDetails();
    return 0;
}