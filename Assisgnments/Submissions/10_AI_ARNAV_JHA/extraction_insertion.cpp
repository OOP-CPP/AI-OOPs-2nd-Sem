#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double real = 0.0, double imaginary = 0.0) {
        this->real = real;
        this->imaginary = imaginary;
    }

    friend  ostream& operator<<( ostream& os, const Complex& c) {
        os << c.real << " + " << c.imaginary << "i";
        return os;
    }

    friend  istream& operator>>( istream& is, Complex& c) {
        cout << "Enter real part: ";
        cout << "Enter real part: ";
        is >> c.real;
        cout << "Enter imaginary part: ";
        is >> c.imaginary;
        return is;
    }
};

int main() {
    Complex c1;
    cout << "Enter a complex number: ";
    cin >> c1;
    cout << "The complex number you entered is: " << c1 <<  endl;

    return 0;
}
Complex operator>>(Complex& c,  istream& is) {
    cout << "Enter real part: ";
    is >> c.real;
    cout << "Enter imaginary part: ";
    is >> c.imaginary;
    return c;
}

void operator<<(const Complex& c,  ostream& os) {
    os << c.real << " + " << c.imaginary << "i";
}

int main() {
    Complex c1;
    cout << "Enter a complex number: ";
    c1 >>  cin;
    cout << "The complex number you entered is: ";
    c1 <<  cout;
    cout <<  endl;

    return 0;
}