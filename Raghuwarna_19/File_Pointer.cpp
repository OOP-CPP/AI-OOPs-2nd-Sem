#include <iostream>
#include <fstream>

int main() {
    std::ofstream file("example.txt"); 

    if (file.is_open()) {
        file << "Hello, File Pointers!"; 
        file.close(); 
    } else {
        std::cout << "Unable to open file";
    }

    std::ifstream readFile("example.txt"); 

    if (readFile.is_open()) {
        std::string content;
        while (getline(readFile, content)) {
            std::cout << content << std::endl; 
        }
        readFile.close(); 
    } else {
        std::cout << "Unable to open file";
    }

    return 0;
}
