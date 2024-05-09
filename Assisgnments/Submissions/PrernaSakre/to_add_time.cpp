#include <iostream>
using namespace std;
class time
{
private:
    int hr, min, sec;

public:
    void get()
    {
        cout << "enter hours:";
        cin >> hr;
        cout << "enter min";
        cin >> min;
        cout << "enter second:";
        cin >> sec;
    }
    void add(time c1, time c2)
    {
        hr = c1.hr + c2.hr;
        min = c1.min + c2.min;
        sec = c1.sec + c2.sec;
    }
    void showtime();
    void normalize();
};
void time::showtime()
{
    cout << hr << ":" << min << ":" << sec << endl;
}
void time::normalize()
{
    min = min + sec / 60;
    sec = sec % 60;
    hr = hr + min / 60;
    min = min % 60;
}

int main()
{
    time t1, t2, t3;
    t1.get();
    t1.showtime();
    t1.normalize();

    t2.get();
    t2.showtime();
    t2.normalize();

    t3.add(t1, t2);
    t3.normalize();
    t3.showtime();
    return 0;
}