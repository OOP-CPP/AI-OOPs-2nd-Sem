#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    // Constructor to initialize the complex number
    Complex(double r, double i) {
        real = r;
        imaginary = i;
    }

    // Function to add two complex numbers
    Complex add(const Complex& other) {
        double newReal = real + other.real;
        double newImaginary = imaginary + other.imaginary;
        return Complex(newReal, newImaginary);
    }

    // Function to display the complex number
    void display() {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    // Creating two complex numbers
    Complex num1(3.5, 2.5);
    Complex num2(1.2, 4.8);

    // Adding two complex numbers
    Complex sum = num1.add(num2);

    // Displaying the result
    std::cout << "Sum: ";
    sum.display();

    return 0;
}
