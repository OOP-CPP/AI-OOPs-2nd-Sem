#include <iostream>

using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};


Time addTime(const Time& t1, const Time& t2) {
    Time sum;
    int extraMinutes = 0;
    int extraHours = 0;

   
    sum.seconds = t1.seconds + t2.seconds;
    if (sum.seconds >= 60) {
        extraMinutes = sum.seconds / 60;
        sum.seconds %= 60;
    }

   
    sum.minutes = t1.minutes + t2.minutes + extraMinutes;
    if (sum.minutes >= 60) {
        extraHours = sum.minutes / 60;
        sum.minutes %= 60;
    }

   
    sum.hours = t1.hours + t2.hours + extraHours;

    return sum;
}


void displayTime(const Time& t) {
    cout << "Time: " << t.hours << " hours " << t.minutes << " minutes " << t.seconds << " seconds\n";
}

int main() {
    Time time1, time2, totalTime;

 
    cout << "Enter the first time (hours minutes seconds): ";
    cin >> time1.hours >> time1.minutes >> time1.seconds;

    cout << "Enter the second time (hours minutes seconds): ";
    cin >> time2.hours >> time2.minutes >> time2.seconds;


    totalTime = addTime(time1, time2);

   
    displayTime(totalTime);

    return 0;
}