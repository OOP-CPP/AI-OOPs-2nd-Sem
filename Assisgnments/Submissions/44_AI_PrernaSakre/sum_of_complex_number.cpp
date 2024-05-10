#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void get()
    {
        cout << "enter real part:" << endl;
        cin >> a;
        cout << "enter imaginary part:" << endl;
        cin >> b;
    }
    void setdatabysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printnumber()
    {
        cout << a << "+" << b << "i" << endl;
    }
};
int main()
{
    complex x1, x2, x3;
    x1.get();
    cout << "first complex number is:";
    x1.printnumber();

    x2.get();
    cout << "second complex number is:";
    x2.printnumber();

    x3.setdatabysum(x1, x2);
    cout << "after addintion , Complex number is:";
    x3.printnumber();
    
}