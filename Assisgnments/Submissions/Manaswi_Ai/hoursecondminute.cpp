#include<iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}
    void displayTime() {
        cout << "Time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    }
    Time addTime(Time t) {
        Time sum;
        sum.seconds = seconds + t.seconds;
        sum.minutes = minutes + t.minutes + sum.seconds / 60;
        sum.hours = hours + t.hours + sum.minutes / 60;
        sum.minutes %= 60;
        sum.seconds %= 60;
        return sum;
    }
};

int main() {
    Time time1(2, 30, 45);  
    Time time2(1, 45, 15);  
    cout << "Original Time 1: ";
    time1.displayTime();
    cout << "Original Time 2: ";
    time2.displayTime();
    Time sum = time1.addTime(time2);
    cout << "Sum of Time 1 and Time 2: ";
    sum.displayTime();

return 0;
}