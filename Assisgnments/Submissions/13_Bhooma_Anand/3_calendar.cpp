#include <iostream>

using namespace std;

// Function to check if a given year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to print a basic calendar for a given year
void printCalendar(int year) {
    const int daysInMonth[] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    cout << "Calendar for the year " << year << ":" << endl;

    for (int month = 0; month < 12; ++month) {
        cout << "\n=========================\n";
        cout << months[month] << " " << year << "\n";
        cout << "=========================\n\n";

        cout << " Sun Mon Tue Wed Thu Fri Sat\n";

        // Calculate the day of the week for the first day of the month
        int firstDay = (year + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
        for (int i = 0; i < firstDay; ++i) {
            cout << "    ";
        }

        for (int day = 1; day <= daysInMonth[month]; ++day) {
            cout.width(4);
            cout << day;
            firstDay = (firstDay + 1) % 7;
            if (firstDay == 0) {
                cout << endl;
            }
        }
        cout << endl;
    }
}

int main() {
    int year = 2024;
    printCalendar(year);
    return 0;
}
