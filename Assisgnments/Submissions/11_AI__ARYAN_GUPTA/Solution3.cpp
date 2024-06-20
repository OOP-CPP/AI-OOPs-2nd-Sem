#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point() : x(0), y(0) {}
    
    Point(int x, int y) : x(x), y(y) {}

    // Friend function to overload extraction operator
    friend istream& operator>>(istream& in, Point& point);

    // Friend function to overload insertion operator
    friend ostream& operator<<(ostream& out, const Point& point);
};

// Overloading the extraction operator >>
    istream& operator>>(istream& in, Point& point) {
    cout << "Enter x coordinate: ";
    in >> point.x;
    cout << "Enter y coordinate: ";
    in >> point.y;
    return in;
}

// Overloading the insertion operator <<
    ostream& operator<<(ostream& out, const Point& point) {
    out << "Point(" << point.x << ", " << point.y << ")";
    return out;
}

int main() {
    Point p;
    cout << "Enter the coordinates of the point:" << std::endl;
    cin >> p;
    cout << "The point you entered is: " << p << std::endl;
    return 0;
}
