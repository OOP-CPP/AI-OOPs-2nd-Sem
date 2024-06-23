#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    ComplexNumber(double r = 0, double i = 0) : real(r), imaginary(i) {}

    friend ostream& operator<<(ostream& os, const ComplexNumber& cn) {
        os << cn.real << " + " << cn.imaginary << "i";
        return os;
    }

    friend istream& operator>>(istream& is, ComplexNumber& cn) {
        cout << "Enter real part: ";
        is >> cn.real;
        cout << "Enter imaginary part: ";
        is >> cn.imaginary;
        return is;
    }
};

int main() {
    ComplexNumber cn1;
    cout << "Enter a complex number:" << endl;
    cin >> cn1;
    cout << "The complex number is: " << cn1 << endl;

    return 0;
}
