#include<iostream>
using namespace std;

class Complex{
private:
    int real;
    int img;

public:
    Complex(int real, int img){
        this->real = real;
        this->img = img;
    }

    void printComplexNum(){
        cout << real << " + " << img << "i\n";
    }

    Complex operator + (Complex &num){
        int resReal = this->real + num.real;
        int resImg = this->img + num.img;
        Complex res(resReal, resImg);
        return res;
    }

    Complex operator - (Complex &num){
        int resReal = this->real - num.real;
        int resImg = this->img - num.img;
        Complex res(resReal, resImg);
        return res;
    }

    Complex operator * (Complex &num){
        int resReal = this->real * num.real - this->img * num.img;
        int resImg = this->real * num.img + this->img * num.real;
        Complex res(resReal, resImg);
        return res;
    }

};

int main(){
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex c3 = c1 + c2;
    c3.printComplexNum();
    Complex c4 = c3 * c2;
    c4.printComplexNum();
    Complex c5 = c4 - c2;
    c5.printComplexNum();

    return 0;
}