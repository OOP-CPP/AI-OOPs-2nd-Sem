#include <iostream>

using namespace std;

// Define a structure for complex numbers
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
Complex addComplex(Complex num1, Complex num2) {
    Complex sum;
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    return sum;
}

int main() {
    Complex num1, num2, sum;

    // Input for first complex number
    cout << "Enter real and imaginary parts of first complex number:" << endl;
    cin >> num1.real >> num1.imag;

    // Input for second complex number
    cout << "Enter real and imaginary parts of second complex number:" << endl;
    cin >> num2.real >> num2.imag;

    // Add the complex numbers
    sum = addComplex(num1, num2);

    // Display the result
    cout << "Sum = " << sum.real << " + " << sum.imag << "i" << endl;

    return 0;
}
