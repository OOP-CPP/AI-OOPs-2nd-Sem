#include <iostream>

using namespace std;

// Function to add time
void addTime(int &hours, int &minutes, int &seconds, int addHours, int addMinutes, int addSeconds) {
    // Add seconds
    seconds += addSeconds;

    // If seconds overflow, adjust minutes and seconds
    if (seconds >= 60) {
        minutes += seconds / 60;
        seconds %= 60;
    }

    // Add minutes
    minutes += addMinutes;

    // If minutes overflow, adjust hours and minutes
    if (minutes >= 60) {
        hours += minutes / 60;
        minutes %= 60;
    }

    // Add hours
    hours += addHours;
}

int main() {
    int hours, minutes, seconds;
    int addHours, addMinutes, addSeconds;

    // Input current time
    cout << "Enter current time (hh mm ss): ";
    cin >> hours >> minutes >> seconds;

    // Input time to add
    cout << "Enter time to add (hh mm ss): ";
    cin >> addHours >> addMinutes >> addSeconds;

    // Add time
    addTime(hours, minutes, seconds, addHours, addMinutes, addSeconds);

    // Display updated time
    cout << "Updated time: " << hours << " hours " << minutes << " minutes " << seconds << " seconds";

    return 0;
}
