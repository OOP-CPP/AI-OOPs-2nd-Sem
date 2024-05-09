#include <iostream>
using namespace std;

// Function to check if the given year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
// Function to get the number of days in a month
int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}
// Function to print the calendar of a year
void printCalendar(int year) {
    cout << "Calendar of " << year << ":\n\n";

    // Array to store the names of the months
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    // Loop through each month
    for (int month = 0; month < 12; month++) {
        cout << "-----------" << months[month] << "-----------\n";
        cout << " Sun Mon Tue Wed Thu Fri Sat\n";

        // Get the number of days in the current month
        int numDays = daysInMonth(month + 1, year);

        // Calculate the starting day of the week
        int startDay = (year * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;

        // Print leading spaces
        for (int i = 0; i < startDay; i++) {
            cout << "    ";
        }
        // Print the days of the month
        for (int day = 1; day <= numDays; day++) {
            printf("%4d", day);
            startDay++;
            if (startDay > 6) {
                startDay = 0;
                cout << endl;
            }
        }

        cout << endl << endl;
    }
}

int main() {
    int year = 2024;
    printCalendar(year);
    return 0;
}
