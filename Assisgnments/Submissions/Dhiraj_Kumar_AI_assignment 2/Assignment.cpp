//Program to show function of this pointer
#include<iostream>
using namespace std;
class A{
    int a,b;
    public:

    A(int a,int b){
        this->a=a;
        this->b=b;
    }
    void show(){
        cout<<"a="<<a<<","<<"b="<<b<<endl;
    }
};
int main(){
    A obj(20,30);
    obj.show();
    return 0;
}