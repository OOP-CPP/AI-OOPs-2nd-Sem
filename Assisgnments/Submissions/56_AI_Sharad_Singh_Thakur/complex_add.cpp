#include <iostream>
using namespace std;

class Complex{
    private:
        double real;
        double imag;
    public:
        Complex(double real,double imag){
            this->real = real;
            this->imag = imag;
        }
        Complex add(Complex first,Complex second){
            return Complex(first.real + second.real ,first.imag + second.imag );
        }
        void Print(){
            cout << this->real << '+' << this->imag << "i"<<endl;
        }
        friend Complex add(Complex,Complex);
};
Complex add(Complex first,Complex second){
            return Complex(first.real + second.real ,first.imag + second.imag );
        }

int main(){
    Complex c1(10,20),c2(10,20);
    Complex c3 = add(c1,c2);
    c3.Print();
    return 0;
}

