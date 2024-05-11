#include<iostream>
using namespace std;

// Define a class to represent a complex number
class Complex {
public:
    // real and imaginary parts
    double real, imag;

    // Default constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Function to add two Complex numbers
    Complex operator + (Complex const &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    // Function to print a Complex number
    void print() {
        cout << real << " + i" << imag << endl;
    }
};

int main() {
    // Create two complex numbers
    Complex c1(10, 5), c2(2, 4);

    // Add the numbers
    Complex c3 = c1 + c2;

    // Print the result
    cout << "Result is: ";
    c3.print();

    return 0;
}
