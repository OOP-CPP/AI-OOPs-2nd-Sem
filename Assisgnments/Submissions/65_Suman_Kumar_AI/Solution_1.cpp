#include<bits/stdc++.h>
using namespace std;

class Complex {
  int real;
  int imaginary;
  
  public:

    void addComp(Complex c1, Complex c2) {
      real = c1.real + c2.real;
      imaginary = c1.imaginary + c2.imaginary;
    }

    void setData() {
      int a, b;
      cout << "Enter real and imaginary part respectively: ";
      cin >> a >> b;
      real = a;
      imaginary = b;
    }
    void getData() {
      cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {

  Complex c1, c2, c3;
  c1.setData();
  cout << "c1 : ";
  c1.getData();
  c2.setData();
  cout << "c2 : ";
  c2.getData();

  c3.addComp(c1, c2);

  cout << "Sum of c1 and c2 : ";
  c3.getData();

  return 0;
}

