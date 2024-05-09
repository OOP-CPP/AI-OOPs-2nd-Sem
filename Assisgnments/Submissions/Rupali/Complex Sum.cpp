#include <iostream>

using namespace std;

// Class to represent complex numbers
class Complex {
private:
    float real;
    float imag;

public:
    // Constructor to initialize the complex number
    Complex(float r, float i) : real(r), imag(i) {}

    // Function to add two complex numbers
    Complex add(const Complex& other) const {
        float real_sum = real + other.real;
        float imag_sum = imag + other.imag;
        return Complex(real_sum, imag_sum);
    }

    // Function to display the complex number
    void display() const {
        cout << real << " + " << imag << "i";
    }
};

int main() {
    // Create two complex numbers
    Complex num1(3.5, 2.7);
    Complex num2(1.2, 4.3);

    // Add the complex numbers
    Complex sum = num1.add(num2);

    // Display the result
    cout << "Sum: ";
    sum.display();
    cout << endl;

    return 0;
}
