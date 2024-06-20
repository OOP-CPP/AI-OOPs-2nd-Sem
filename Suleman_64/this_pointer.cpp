#include <iostream>
using namespace std;

class MyClass {
private:
    int x;

public:
    MyClass(int x) {
        this->x = x;
    }

    void display() {
        cout << "The value of x is: " << this->x << endl;
    }

    bool isEqual(MyClass other) {
        
        return this->x == other.x;
    }
};

int main() {
    
    MyClass obj1(10);
    MyClass obj2(20);

    obj1.display();
    obj2.display();

    if (obj1.isEqual(obj2)) {
        cout << "obj1 and obj2 have equal values of x." << endl;
    } else {
        cout << "obj1 and obj2 have different values of x." << endl;
    }

    return 0;
}