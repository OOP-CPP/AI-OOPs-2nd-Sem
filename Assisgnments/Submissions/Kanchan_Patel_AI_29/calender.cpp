#include <iostream>

using namespace std;

// Function to check if a year is a leap year or not
bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    else
        return false;
}

// Function to find the day of the week for a given date
int dayOfWeek(int day, int month, int year) {
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    year -= month < 3;
    return (year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
}

// Function to print the calendar
void printCalendar(int month, int year) {
    // Array containing number of days in each month
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Adjusting number of days in February for leap years
    if (isLeapYear(year))
        daysInMonth[1] = 29;

    // Displaying the header
    cout << "---------------------------\n";
    cout << "   Calendar - " << month << "/" << year << "\n";
    cout << "---------------------------\n";
    cout << " Sun Mon Tue Wed Thu Fri Sat\n";

    // Finding the starting day of the week for the given month
    int startingDay = dayOfWeek(1, month, year);

    // Printing spaces for days before the starting day
    for (int i = 0; i < startingDay; i++)
        cout << "    ";

    // Printing the days of the month
    for (int day = 1; day <= daysInMonth[month - 1]; day++) {
        printf("%4d", day);

        // Moving to the next line if it's Saturday
        if ((day + startingDay) % 7 == 0 || day == daysInMonth[month - 1])
            cout << endl;
    }
}

int main() {
    int month, year;

    // Input month and year from the user
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    // Print the calendar
    printCalendar(month, year);

    return 0;
}