#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    
    Person() : name(""), age(0) {}

    Person(std::string n, int a) : name(n), age(a) {}

    friend std::istream& operator>>(std::istream &in, Person &p);
    friend std::ostream& operator<<(std::ostream &out, const Person &p);
};
std::istream& operator>>(std::istream &in, Person &p) {
    std::cout << "Enter name: ";
    in >> p.name;
    std::cout << "Enter age: ";
    in >> p.age;
    return in;
}
std::ostream& operator<<(std::ostream &out, const Person &p) {
    out << "Name: " << p.name << ", Age: " << p.age;
    return out;
}

int main() {
    Person person;
    std::cin >> person;
    std::cout << person << std::endl;

    return 0;
}
