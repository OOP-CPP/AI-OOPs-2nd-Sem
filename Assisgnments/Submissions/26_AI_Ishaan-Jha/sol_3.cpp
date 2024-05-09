#include <iostream>
#include <iomanip>

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getNumberOfDays(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

int getStartingDayOfWeek(int month, int year) {
    int day = 1;
    int monthCode, yearCode, centuryCode, startingDayOfWeek;

    if (month <= 2) {
        month += 12;
        year--;
    }

    yearCode = (year % 100);
    centuryCode = (year / 100);
    monthCode = (13 * (month + 1)) / 5;

    startingDayOfWeek = (day + monthCode + yearCode + (yearCode / 4) + (centuryCode / 4) + (5 * centuryCode)) % 7;

    return (startingDayOfWeek + 5) % 7; // January 1, 1753 was a Monday
}

void printCalendar(int month, int year) {
    std::string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    std::string days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    int startingDayOfWeek = getStartingDayOfWeek(month, year);
    int totalDays = getNumberOfDays(month, year);

    // Print the month and year
    std::cout << months[month - 1] << " " << year << std::endl;

    // Print the days of the week
    for (const auto& day : days) {
        std::cout << std::setw(4) << day;
    }
    std::cout << std::endl;

    // Print leading spaces
    for (int i = 0; i < startingDayOfWeek; ++i) {
        std::cout << std::setw(4) << " ";
    }

    // Print the days
    for (int day = 1; day <= totalDays; ++day) {
        std::cout << std::setw(4) << day;
        if ((day + startingDayOfWeek) % 7 == 0 || day == totalDays) {
            std::cout << std::endl;
        }
    }
}

int main() {
    int month, year;

    std::cout << "Enter month (1-12): ";
    std::cin >> month;
    std::cout << "Enter year: ";
    std::cin >> year;

    printCalendar(month, year);

    return 0;
}