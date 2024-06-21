#include <iostream>
#include <fstream>
#include <string>

void writeFile(const std::string& filename, const std::string& content) {
    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "Error opening file for writing: " << filename << std::endl;
        return;
    }
    outFile << content;

    if (!outFile) {
        std::cerr << "Error writing to file: " << filename << std::endl;
    } else {
        std::cout << "File written successfully: " << filename << std::endl;
    }

    outFile.close();
}
void readFile(const std::string& filename) {
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cerr << "Error opening file for reading: " << filename << std::endl;
        return;
    }
    std::string content;
    while (std::getline(inFile, content)) {
        std::cout << content << std::endl;
    }
    if (inFile.bad()) {
        std::cerr << "Error reading from file: " << filename << std::endl;
    } else {
        std::cout << "File read successfully: " << filename << std::endl;
    }
    inFile.close();
}
int main() {
    std::string filename = "example.txt";
    std::string content = "Hello, this is a test file.\nWe are writing some text to it.";

    writeFile(filename, content);
    readFile(filename);

    return 0;
}
