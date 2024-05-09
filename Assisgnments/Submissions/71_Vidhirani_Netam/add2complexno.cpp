#include<iostream>
using namespace std;
struct complex{
    float real;
    //imag=imaginary
    float imag;
};

complex addcomplex(complex num1,complex num2){
    complex sum;
    sum.real=num1.real+num2.real;
    sum.imag=num1.imag+num2.imag;
    return sum;
}

int main(){
    complex num1,num2,sum;
    cout<<"Enter the real and imaginary parts of first compleax number: ";
    cin>>num1.real>>num1.imag;

    cout<<"Enter the real and imaginary parts of second compleax number: ";
    cin>>num2.real>>num2.imag;

    sum=addcomplex(num1,num2);
    cout<<"sum: "<<sum.real<<"+"<<sum.imag<<"i";
    return 0;
}