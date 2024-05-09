#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    void display() const {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    Complex num1(2.5, 3.7);
    Complex num2(1.8, 4.2);

    Complex sum = num1 + num2;

    std::cout << "Sum: ";
    sum.display();

    return 0;
}