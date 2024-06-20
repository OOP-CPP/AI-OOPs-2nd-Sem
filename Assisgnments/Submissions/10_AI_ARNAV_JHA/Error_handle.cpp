#include <iostream>
#include <fstream>

using namespace std;

void handleFileIO() {
    ifstream inputFile("input.txt");
    if (!inputFile) {
        cerr << "Error opening input file." << endl;
        return;
    }

    ofstream outputFile("output.txt");
    if (!outputFile) {
        cerr << "Error opening output file." << endl;
        return;
    }

    // File input and output operations go here

    inputFile.close();
    outputFile.close();
}

int main() {
    handleFileIO();
    return 0;
}