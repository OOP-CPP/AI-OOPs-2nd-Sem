#include <iostream>
using namespace std;

class Time
{
private:
    int hrs;
    int mins;
    int secs;

public:
    Time(int h = 0, int m = 0, int s = 0) : hrs(h), mins(m), secs(s) {}

    void setTime(int h, int m, int s)
    {
        hrs = h;
        mins = m;
        secs = s;
    }

    Time sum(const Time &t2) const
    {
        int totalHrs = hrs + t2.hrs;
        int totalMins = mins + t2.mins;
        int totalSecs = secs + t2.secs;

        if (totalSecs >= 60)
        {
            totalMins += totalSecs / 60;
            totalSecs %= 60;
        }
        if (totalMins >= 60)
        {
            totalHrs += totalMins / 60;
            totalMins %= 60;
        }

        return Time(totalHrs, totalMins, totalSecs);
    }

    void display() const
    {
        cout << "Total time: " << hrs << " hrs, " << mins << " min, " << secs << " sec." << endl;
    }
};

int main()
{
    int H1, M1, S1, H2, M2, S2;

    cout << "Enter first time: "<< endl << "Hrs: ";
    cin >> H1;
    cout<<"Mins: "; 
    cin >> M1;
    cout<<"Secs: ";
    cin >> S1;

    cout << "Enter second time: "<< endl << "Hrs :";
    cin >> H2;
    cout<<"Mins: "; 
    cin >> M2;
    cout<<"Secs: ";
    cin >> S2;

    Time time1(H1, M1, S1);
    Time time2(H2, M2, S2);

    Time totalTime = time1.sum(time2);

    totalTime.display();

    return 0;
}