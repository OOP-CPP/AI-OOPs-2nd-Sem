#include <iostream>
#include <iomanip>
using namespace std;

//  class to represent a calendar
class Calendar {
private:
    // Year is a private data member
    int year;

public:
    // initializing the year
    Calendar(int y) : year(y) {}

    // Function to check if a year is a leap year
    bool isLeapYear() {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    // Function to get the number of days in a month
    int daysInMonth(int month) {
        if (month == 2) {
            // February has 29 days in a leap year and 28 days otherwise
            return isLeapYear() ? 29 : 28;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            // April, June, September, and November have 30 days
            return 30;
        } else {
            // The rest of the months have 31 days
            return 31;
        }
    }

    // Function to print a month
    void printMonth(int month, int& dayOfWeek) {
        int days = daysInMonth(month);

        // Print the month and year
        cout << "---------------------------" << endl;
        cout << "        " << month << "/" << year << endl;
        cout << "---------------------------" << endl;
        cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;

        // Print spaces for the days of the week before the first day of the month
        for (int i = 0; i < dayOfWeek; i++) {
            cout << "     ";
        }

        // Print the days of the month
        for (int day = 1; day <= days; day++) {
            cout << setw(5) << day;
            if (++dayOfWeek > 6) {
                // Start a new line after Saturday
                cout << endl;
                dayOfWeek = 0;
            }
        }

        // Start a new line if the last day of the month is not Saturday
        if (dayOfWeek != 0) {
            cout << endl;
        }

        cout << endl;
    }

    // Function to print a calendar for the year
    void printCalendar() {
        // Get the day of the week of the first day of the year
        int dayOfWeek = getFirstDayOfYear();
        
        // Print each month
        for (int month = 1; month <= 12; month++) {
            printMonth(month, dayOfWeek);
        }
    }

    // Function to get the day of the week of the first day of the year
    int getFirstDayOfYear() {
        
        int dayOfWeek = (year + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
        return dayOfWeek;
    }
};

int main() {
    // Variable to store the year
    int year;

    // input for the year
    cout << "Enter the year: ";
    cin >> year;

    // Create a Calendar with the user's input
    Calendar cal(year);

    // Print the calendar for the year
    cal.printCalendar();

    return 0;
}
