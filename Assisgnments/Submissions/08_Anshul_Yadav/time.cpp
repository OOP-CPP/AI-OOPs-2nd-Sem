#include <iostream>
 
using namespace std;
 
class Time {
private:
    int hours;
    int minutes;
    int seconds;
 
public:
    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
 
    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }
 
    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
 
    Time add(Time t) {
        Time result;
 
        result.hours = hours + t.hours;
        result.minutes = minutes + t.minutes;
        result.seconds = seconds + t.seconds;
 
        if (result.seconds >= 60) {
            result.minutes++;
            result.seconds -= 60;
        }
 
        if (result.minutes >= 60) {
            result.hours++;
            result.minutes -= 60;
        }
 
        return result;
    }
};
 
int main() {
    Time t1(1, 20, 30);
    Time t2(2, 30, 45);
 
    Time result = t1.add(t2);
 
    result.display();
 
    return 0;
}
