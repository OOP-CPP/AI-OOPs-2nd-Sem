#include <iostream>

class Box {
private:
    int width, height, depth;

public:
    // Constructor
    Box(int width, int height, int depth) {
        this->width = width;
        this->height = height;
        this->depth = depth;
    }

    // Setters
    void setWidth(int width) {
        this->width = width;
    }

    void setHeight(int height) {
        this->height = height;
    }

    void setDepth(int depth) {
        this->depth = depth;
    }

    // Getters
    int getWidth() const {
        return this->width;
    }

    int getHeight() const {
        return this->height;
    }

    int getDepth() const {
        return this->depth;
    }

    // Method to calculate volume
    int calculateVolume() const {
        return this->width * this->height * this->depth;
    }
};

int main() {
    // Create a Box object
    Box myBox(3, 4, 5);

    // Output initial dimensions
    std::cout << "Initial dimensions of the box:" << std::endl;
    std::cout << "Width: " << myBox.getWidth() << std::endl;
    std::cout << "Height: " << myBox.getHeight() << std::endl;
    std::cout << "Depth: " << myBox.getDepth() << std::endl;

    // Calculate and output the volume
    std::cout << "Volume: " << myBox.calculateVolume() << std::endl;

    // Modify dimensions using setters
    myBox.setWidth(6);
    myBox.setHeight(7);
    myBox.setDepth(8);

    // Output modified dimensions
    std::cout << "\nModified dimensions of the box:" << std::endl;
    std::cout << "Width: " << myBox.getWidth() << std::endl;
    std::cout << "Height: " << myBox.getHeight() << std::endl;
    std::cout << "Depth: " << myBox.getDepth() << std::endl;

    // Calculate and output the new volume
    std::cout << "New Volume: " << myBox.calculateVolume() << std::endl;

    return 0;
}
