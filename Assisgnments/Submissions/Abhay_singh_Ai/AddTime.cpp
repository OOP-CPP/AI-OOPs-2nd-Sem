#include <iostream>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

Time addTime(const Time& t1, const Time& t2) {
    Time result;
    int totalSeconds = t1.seconds + t2.seconds;
    result.seconds = totalSeconds % 60;
    int carrySeconds = totalSeconds / 60;

    int totalMinutes = t1.minutes + t2.minutes + carrySeconds;
    result.minutes = totalMinutes % 60;
    int carryMinutes = totalMinutes / 60;

    result.hours = t1.hours + t2.hours + carryMinutes;

    return result;
}

int main() {
    Time time1 = {10, 30, 45};
    Time time2 = {2, 15, 20};

    Time sum = addTime(time1, time2);

    std::cout << "Sum of times: " << sum.hours << " hours, " << sum.minutes << " minutes, " << sum.seconds << " seconds" << std::endl;

    return 0;
}