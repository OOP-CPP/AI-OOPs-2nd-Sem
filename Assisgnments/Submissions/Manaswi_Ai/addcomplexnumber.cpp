#include<iostream>
using namespace std;
class complex{
    private :
    int a;
    int b;
    public :
    void setdata(int v1 , int v2){
        a = v1;
        b = v2;
    }
    void sum(complex o1 , complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void print(){
        cout<<" your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
    int main(){
        complex c1 ,c2 ,c3 ;
        c1.setdata(5,5);
        c1.print();

        c2.setdata(5,5);
        c2.print();

        c3.sum(c1,c2);
        c3.print();

         return 0;

    }


