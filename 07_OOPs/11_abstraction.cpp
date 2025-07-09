#include<iostream>
using namespace std;

// Abstract Class
class Shape{
public:
    // pure virtual function, abstract function
    virtual void draw() = 0;
};

class Circle : public Shape{
public:
    void draw(){
        cout << "drawing Circle..." << endl;
    }
};

class Square : public Shape{
public:
    void draw(){
        cout << "drawing Square..." << endl;
    }
};


int main(){
    Circle c1;
    c1.draw();
    
    Square s1;
    s1.draw();

    // cant make obj or call abstract functions/ classes
    // Shape sh1;
    // s1.draw();

    return 0;
}