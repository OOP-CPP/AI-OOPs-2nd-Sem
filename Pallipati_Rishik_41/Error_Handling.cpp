#include <iostream>
#include <fstream>
#include <string>

void readFile(const std::string& filename) {
    std::ifstream file;
    file.open(filename);

    if (!file.is_open()) {
        throw std::runtime_error("Error: Unable to open file.");
    }

    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();
}

int main() {
    std::string filename = "example.txt";

    try {
        readFile(filename);
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
