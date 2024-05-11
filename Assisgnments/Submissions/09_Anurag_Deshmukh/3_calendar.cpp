#include <iostream>

using namespace std;

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

    // Function to add two time objects
    Time addTime(Time t) {
        Time sum(0, 0, 0);
        sum.seconds = seconds + t.seconds;
        sum.minutes = minutes + t.minutes + sum.seconds / 60;
        sum.hours = hours + t.hours + sum.minutes / 60;
        sum.minutes %= 60;
        sum.seconds %= 60;
        return sum;
    }

    // Function to display the time
    void displayTime() {
        cout << "Time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    }
};

int main() {
    // Create two time objects
    Time t1(1, 30, 45); // 1 hour, 30 minutes, 45 seconds
    Time t2(2, 45, 30); // 2 hours, 45 minutes, 30 seconds

    // Add the two time objects
    Time sum = t1.addTime(t2);

    // Display the result
    cout << "Sum of times:" << endl;
    sum.displayTime();

    return 0;
}
