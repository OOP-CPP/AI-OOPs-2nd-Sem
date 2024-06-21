#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Declare file pointers
    std::fstream file;

    file.open("example.txt", std::ios::out);
    if (!file) {
        std::cerr << "File could not be opened for writing!" << std::endl;
        return 1;
    }

    file << "Hello, this is a test file.\n";
    file << "We are writing some text to it.\n";

    file.close();

    file.open("example.txt", std::ios::in);
    if (!file) {
        std::cerr << "File could not be opened for reading!" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }
    file.close();

    return 0;
}
