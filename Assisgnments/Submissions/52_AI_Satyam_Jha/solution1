#include<iostream>
using namespace std;

class complex
{
    int r,i;
    public:
           void get()
           {
            cout<<"\n enter real part::";
            cin>>r;
            cout<<"\nenter imaginary part::";
            cin>>i;
           }
           void disp()
           {
            cout<<r<<"+"<<i<<"i"<<"\n";
           }
           void sum(complex,complex);
};
void complex::sum(complex c1,complex c2)
{
    r=c1.r+c2.r;
    i=c1.i+c2.i;
}

int main()
{
    complex c1,c2,c3;
    cout<<"enter 1st complex number: \n";
    c1.get();
    cout<<"enter 2nd complex number: \n";
    c2.get();
    cout<<"\n first complex number is::";
    c1.disp();
    cout<<"\n second complex number is::";
    c2.disp();
    c3.sum(c1,c2);
    cout<<"\n the sum of two complex no is::";
    c3.disp();
    return 0;
}
