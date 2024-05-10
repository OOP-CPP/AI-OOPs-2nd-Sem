#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int year = 2024;
    int month = 1; // January
    int daysInMonth = 31;
    int startingDay = 3; // Wednesday (0 for Sunday, 1 for Monday, ..., 6 for Saturday)

    // Print the month and year
    cout << "    January " << year << endl;
    cout << " Su Mo Tu We Th Fr Sa" << endl;

    // Print leading spaces for the first week
    for (int i = 0; i < startingDay; ++i) {
        cout << "   ";
    }

    // Print the days of the month
    for (int day = 1; day <= daysInMonth; ++day) {
        // Print the day
        cout << setw(2) << day << " ";

        // If it's Saturday, start a new line
        if ((day + startingDay) % 7 == 0) {
            cout << endl;
        }
    }

    cout << endl;

    return 0;
}

