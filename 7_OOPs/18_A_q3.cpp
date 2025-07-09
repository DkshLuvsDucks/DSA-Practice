#include<iostream>
using namespace std;

class Person{
protected:
    string name;
    int age;

public:
    Person(string n, int a){
        name = n;
        age = a;
    }
};

class Student : public Person{
private:
    int studentId;

public:
    Student(string n, int a, int id) : Person(n, a){
        studentId = id;
    }

    void displayStudentInfo(){
        cout << "# Student-Details:\n";
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Student-Id: " << this->studentId << endl;
    }
};


int main(){
    Student s1("Daksh", 21, 2022142);
    s1.displayStudentInfo();
    return 0;
}