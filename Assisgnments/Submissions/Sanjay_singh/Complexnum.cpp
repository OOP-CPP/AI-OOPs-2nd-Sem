#include <iostream>

using namespace std;

class Complex {
private:
    float real;
    float imaginary;
public:
    Complex(float r, float i) {
        real = r;
        imaginary = i;
    }
    
    Complex add(Complex c) {
        float realSum = real + c.real;
        float imaginarySum = imaginary + c.imaginary;
        return Complex(realSum, imaginarySum);
    }

    void display() {
        cout << "Sum = " << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex num1(3, 4);
    Complex num2(1, 2);
    Complex sum = num1.add(num2);
    sum.display();
    return 0;
}