#include <iostream>
using namespace std;


class Complex {
private:
    float real;
    float imag;

public:
   
    Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }  
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);
    Complex c3 = c1 + c2;
    cout << "The sum of ";
    c1.display();
    cout << "and ";
    c2.display();
    cout << "is ";
    c3.display();

    return 0;
}