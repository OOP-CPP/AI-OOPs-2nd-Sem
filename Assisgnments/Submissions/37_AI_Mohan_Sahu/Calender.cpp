#include <iostream>
#include <iomanip>
using namespace std;

class Calendar {
private:
    int year;

public:
    Calendar(int y) : year(y) {}

    bool isLeapYear() {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    int daysInMonth(int month) {
        if (month == 2) {
            return isLeapYear() ? 29 : 28;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            return 30;
        } else {
            return 31;
        }
    }

    void printMonth(int month, int& dayOfWeek) {
        int days = daysInMonth(month);

        cout << "---------------------------" << endl;
        cout << "        " << month << "/" << year << endl;
        cout << "---------------------------" << endl;
        cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;

        for (int i = 0; i < dayOfWeek; i++) {
            cout << "     ";
        }

        for (int day = 1; day <= days; day++) {
            cout << setw(5) << day;
            if (++dayOfWeek > 6) {
                cout << endl;
                dayOfWeek = 0;
            }
        }

        if (dayOfWeek != 0) {
            cout << endl;
        }

        cout << endl;
    }

    void printCalendar() {
        int dayOfWeek = getFirstDayOfYear();
        
        for (int month = 1; month <= 12; month++) {
            printMonth(month, dayOfWeek);
        }
    }

    int getFirstDayOfYear() {
        int dayOfWeek = (year + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
        return dayOfWeek;
    }
};

int main() {
    int year;

    cout << "Enter the year: ";
    cin >> year;

    Calendar cal(year);
    cal.printCalendar();

    return 0;
}