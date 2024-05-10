#include <iostream>
 
void print_month(int year, int month) {
    const char* month_names[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
 
    std::cout << "\n" << month_names[month] << " " << year << "\n";
    std::cout << "Mo Tu We Th Fr Sa Su\n";
 
    int weekday = (year * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + month * 306 + 5) % 7;
    int days_in_month = 0;
 
    switch (month) {
        case 4: case 6: case 9: case 11:
            days_in_month = 30;
            break;
        case 2:
            days_in_month = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 29 : 28;
            break;
        default:
            days_in_month = 31;
    }
 
    for (int i = 0; i < (weekday + days_in_month); i++) {
        if (i < weekday)
            std::cout << "   ";
        else
            std::cout << (i - weekday + 1) << ((i + 1) % 7 ? " " : "\n");
    }
}
 void print_calendar(int year) {
    for (int month = 1; month <= 12; month++) {
        print_month(year, month);
    }
}
 
int main() {
    int year = 2024;
    print_calendar(year);
    return 0;
}