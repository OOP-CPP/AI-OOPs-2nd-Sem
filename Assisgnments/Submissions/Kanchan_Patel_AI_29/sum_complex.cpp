#include <iostream>

using namespace std;

// Structure to represent a complex number
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
Complex addComplex(Complex num1, Complex num2) {
    Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

int main() {
    Complex num1, num2, sum;

    // Input first complex number
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> num1.real >> num1.imag;

    // Input second complex number
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> num2.real >> num2.imag;

    // Add two complex numbers
    sum = addComplex(num1, num2);

    // Display the result
    cout << "Sum = " << sum.real << " + " << sum.imag << "i";

    return 0;
}
