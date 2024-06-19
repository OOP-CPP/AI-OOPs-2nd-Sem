//this pointer program 

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor
    Rectangle(int length, int width) {
        // Using this pointer to distinguish between member variables and parameters
        this->length = length;
        this->width = width;
    }

    // Member function to set dimensions
    Rectangle& setDimensions(int length, int width) {
        this->length = length;
        this->width = width;
        return *this; // Returning the current object to enable chaining
    }

    // Member function to calculate area
    int area() {
        return this->length * this->width; // Using this pointer explicitly
    }

    // Member function to display dimensions
    void display() {
        cout << "Length: " << this->length << ", Width: " << this->width << endl;
    }
};

int main() {
    // Creating an object of Rectangle
    Rectangle rect(10, 5);

    // Displaying initial dimensions and area
    rect.display();
    cout << "Initial Area: " << rect.area() << endl;

    // Using setDimensions function with method chaining
    rect.setDimensions(20, 10).display();

    // Displaying new area
    cout << "New Area: " << rect.area() << endl;

    return 0;
}
