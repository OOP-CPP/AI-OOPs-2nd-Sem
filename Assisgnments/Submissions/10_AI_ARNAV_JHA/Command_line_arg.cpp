#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
    // Check if any command line arguments are provided
    if (argc > 1) {
        // Print all the command line arguments
        cout << "Command line arguments:" << endl;
        for (int i = 1; i < argc; i++) {
            cout << argv[i] << endl;
        }
    } else {
        cout << "No command line arguments provided." << endl;
    }

    return 0;
}
