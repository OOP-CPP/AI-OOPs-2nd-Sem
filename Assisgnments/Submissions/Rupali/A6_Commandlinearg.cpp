#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <argument1> [<argument2> ... <argumentN>]" << std::endl;
        return 1;
    }

    std::cout << "Number of arguments: " << argc << std::endl;

    for (int i = 0; i < argc; ++i) {
        std::cout << "Argument " << i << ": " << argv[i] << std::endl;
    }

    return 0;
}
