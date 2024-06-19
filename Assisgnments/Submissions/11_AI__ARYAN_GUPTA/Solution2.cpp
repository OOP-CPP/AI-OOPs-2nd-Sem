#include <iostream>
using namespace std;

class Example
{
    int a;
    int x;

public:
    void setData(int a)
    {
        this->a = a;
    }

    Example &setdata2(int x)
    {
        this->x = x;
        return *this;
    }

    void display()
    {
        cout << "The value of a is:" << a << endl;
    }
    void display2()
    {
        cout << "The value of x is:" << x << endl;
    }
};

int main()
{
    Example a;
    a.setData(10);
    a.display();

    Example x;
    x.setdata2(5).display2();

    return 0;
}

// "this" keyword is a pointer which points to the object which invokes the member function.
