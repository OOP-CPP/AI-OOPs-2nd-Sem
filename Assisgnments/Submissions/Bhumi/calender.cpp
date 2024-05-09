#include <iostream>
#include <iomanip>

using namespace std;
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}
void printCalendar(int month, int year) {
    cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;
    int firstDayOfWeek = (year - (14 - month) / 12) % 7;
    int daysInCurrentMonth = daysInMonth(month, year);
    for (int i = 0; i < firstDayOfWeek; ++i) {
        cout << setw(5) << " ";
    }
    for (int day = 1; day <= daysInCurrentMonth; ++day) {
        cout << setw(5) << day;
        if ((firstDayOfWeek + day) % 7 == 0 || day == daysInCurrentMonth) {
            cout << endl;
        }
    }
}

int main() {
    int month, year;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    printCalendar(month, year);

    return 0;
}