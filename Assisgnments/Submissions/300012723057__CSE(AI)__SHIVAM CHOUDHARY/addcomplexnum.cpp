#include<bits/stdc++.h>
using namespace std;
  

class Complex 
{ 
    public: int real, imaginary;
    Complex(int tempReal = 0, 
            int tempImaginary = 0)
    {
        real = tempReal;
        imaginary = tempImaginary;
    }
    Complex addComp(Complex C1, Complex C2)
    {
        Complex temp;
        temp.real = C1.real + C2.real;
        temp.imaginary = (C1.imaginary + C2.imaginary);
  
        return temp;
    }
};
  
int main()
{
    Complex C1(3, 2);
    cout << "Complex number 1 : " << 
             C1.real << " + i" << 
             C1.imaginary << endl;
    Complex C2(9, 5);
    cout << "Complex number 2 : " << 
             C2.real << " + i" << 
             C2.imaginary << endl;
    Complex C3;
    C3 = C3.addComp(C1, C2);
 
    cout << "Sum of complex number : " << 
             C3.real << " + i" << 
             C3.imaginary;
}