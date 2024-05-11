#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    std::vector<std::string> months = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    std::vector<int> days = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 
    std::vector<int> dayOfWeek = { 1, 4, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6 }; 
    for (int m = 0; m < 12; ++m) {
        std::cout << "\n\n  " << months[m] << " 2024\n";
        std::cout << "  Su  Mo  Tu  We  Th  Fr  Sa\n";
        for (int s = 0; s < dayOfWeek[m]; ++s) {
            std::cout << "    ";
        }
        for (int d = 1; d <= days[m]; ++d) {
            std::cout << std::setw(4) << d;
            if ((dayOfWeek[m] + d) % 7 == 0) {
                std::cout << "\n";
            }
        }
    }
    return 0;
}
