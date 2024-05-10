#include <iostream>

using namespace std;

int main() {
    int hours1, minutes1, seconds1;
    int hours2, minutes2, seconds2;

    cout << "Enter first time (hours minutes seconds): ";
    cin >> hours1 >> minutes1 >> seconds1;

    cout << "Enter second time (hours minutes seconds): ";
    cin >> hours2 >> minutes2 >> seconds2;

    int total_hours = hours1 + hours2;
    int total_minutes = minutes1 + minutes2;
    int total_seconds = seconds1 + seconds2;

    if (total_seconds >= 60) {
        total_minutes += total_seconds / 60;
        total_seconds %= 60;
    }

    if (total_minutes >= 60) {
        total_hours += total_minutes / 60;
        total_minutes %= 60;
    }

    cout << "Total time: " << total_hours << " hours, " << total_minutes << " minutes, " << total_seconds << " seconds." << endl;

    return 0;
}
