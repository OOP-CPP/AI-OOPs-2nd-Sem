#include <iostream>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor to initialize the time
    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Function to add time
    void addTime(int h, int m, int s) {
        seconds += s;
        minutes += m + seconds / 60;
        hours += h + minutes / 60;

        seconds %= 60;
        minutes %= 60;
        hours %= 24;
    }

    // Function to display the time
    void displayTime() {
        std::cout << "Time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << std::endl;
    }
};

int main() {
    // Creating a time object
    Time currentTime(10, 30, 45);

    // Adding time
    int addHours = 1;
    int addMinutes = 15;
    int addSeconds = 30;
    currentTime.addTime(addHours, addMinutes, addSeconds);

    // Displaying the updated time
    currentTime.displayTime();

    return 0;
}