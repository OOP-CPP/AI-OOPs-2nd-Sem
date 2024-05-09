#include <iostream>
using namespace std;
class Time {
private:
    int hrs;
    int mint;
    int sec;

public:
    Time(int h = 0, int m = 0, int s = 0) : hrs(h), mint(m), sec(s) {}

    void sett(int h, int m, int s) {
        hrs = h;
        mint = m;
        sec = s;
    }
    Time calctdiff(const Time& endTime) const {
        Time diffr;
        int startsec = hrs * 3600 + mint * 60 + sec;
        int endsec = endTime.hrs * 3600 + endTime.mint * 60 + endTime.sec;
        int diffsec = endsec - startsec;
        if (diffsec<=0)
        {
            diffsec=diffsec+86400;
        }

        diffr.hrs = diffsec / 3600;
        diffr.mint = (diffsec % 3600) / 60;
        diffr.sec = diffsec % 60;

        return diffr;
    }

    void display() const {
        cout << hrs << " hrs, " << min << " mint, " << sec << " sec." << endl;
    }
};

int main() {
    Time startTime, endTime;

    cout << "Enter start time (hrs min sec): ";
    int h, m, s;
    cin >> h >> m >> s;
    startTime.sett(h, m, s);

    cout << "Enter end time (hrs min sec): ";
    cin >> h >> m >> s;
    endTime.sett(h, m, s);

    Time diffr = startTime.calctdiff(endTime);

    cout << "Time diffr: ";
    diffr.display();
    return 0;
}
