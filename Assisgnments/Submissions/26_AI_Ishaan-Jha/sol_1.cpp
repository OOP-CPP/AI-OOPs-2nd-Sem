#include <iostream>
using namespace std;

// Class to represent complex numbers
class Complex {
private:
    float real;
    float imag;

public:
    // Constructor to initialize real and imaginary parts
    Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

    // Method to add two complex numbers
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // Method to display a complex number
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // Create two complex numbers
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    // Add the two numbers
    Complex c3 = c1 + c2;

    // Display the result
    cout << "The sum of ";
    c1.display();
    cout << "and ";
    c2.display();
    cout << "is ";
    c3.display();

    return 0;
}