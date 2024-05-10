#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    Complex add(const Complex &c)
    {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    void get(double real_input, double imag_input)
    {
        real = real_input;
        imag = imag_input;
    }

    void display()
    {
        cout << "Result: " << real << " + " << imag << "i" << endl;
    }
};

int main()
{

    Complex num1, num2;
    double r1, i1, r2, i2;

    cout << "For First Complex number, " << endl;
    cout << "Enter real part: ";
    cin >> r1;
    cout << "Enter imaginary part: ";
    cin >> i1;
    num1.get(r1, i1);

    cout << "For Second Complex number, " << endl;
    cout << "Enter real part: ";
    cin >> r2;
    cout << "Enter imaginary part: ";
    cin >> i2;
    num2.get(r2, i2);

    Complex sum = num1.add(num2);

    sum.display();

    return 0;
}