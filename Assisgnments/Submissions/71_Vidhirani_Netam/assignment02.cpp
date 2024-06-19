#include<iostream>
using namespace std;

class aksing{
private:
    int a;
    int b;
public:
    void getdata(int a, int b){
        this -> a = a;
        this -> b = b;
    }
    aksing() {
        a = 10;
        b = 20;
    }
    void print() {
        cout<<"value of a = "<<a<<endl;
        cout<<"value of b = "<<b<<endl;
    }
};

int main() {
    aksing ak;
    ak.print();
    return 0;

}
