#include <iostream>
#include <iomanip>
using namespace std;
// To check if the given year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
// To get the number of days in a month
int getDaysInMonth(int month, int year) {
    if (month == 2)
    {
        return isLeapYear(year) ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    else
    {
        return 31;
    }
}
//  For printing the calendar of a given year
void printCalendar(int year) {
    cout << "Calendar for year " << year << ":" << endl;
    cout << "==============================" << endl;

    string months[12] = {"January", "February", "March", "April", "May", "June","July", "August", "September", "October", "November", "December"};
    
    for (int month = 1; month <= 12; month++) {
        cout << setw(12) << months[month - 1] << " " << year << endl;
        cout << " Sun Mon Tue Wed Thu Fri Sat" << endl;
        // Calculate the starting day of the week for the current month
        int startDay = (year + (year / 4) - (year / 100) + (year / 400) + ((13 * month + 8) / 5)) % 7;
        // Print leading spaces
        for (int i = 0; i < startDay; i++) {
            cout << "    ";
        }
        // Print days
        int daysInMonth = getDaysInMonth(month, year);
        for (int day = 1; day <= daysInMonth; day++) {
            printf("%4d", day);
            startDay++;
            if (startDay % 7 == 0 || day == daysInMonth)
            {
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