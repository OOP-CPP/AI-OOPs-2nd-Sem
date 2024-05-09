#include<iostream>
using namespace std;
class complex{
  int a1,a2,b1,b2;
  public:
  complex(int a,int b, int c,int d){
      a1=a;
      a2=c;
      b1=b;
      b2=d;
  }
  void display(){
      cout<<"\nsum of complex numbers is : "<<a1+a2<<" + i("<<b1+b2<<")";
  }
};
int main(){
    int a,b,c,d;
    cout<<"enter first complex no real and imagenary part : ";
    cin>>a>>b;
    cout<<"\nenter second complex no real and imagenary part : ";
    cin>>c>>d;
    cout<<""<<a<<" + i("<<b<<")";
    cout<<"\n"<<c<<" + i("<<d<<")";
    complex add=complex(a,b,c,d);
    add.display();
    return 0;
}