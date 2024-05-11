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
    Time calctadd(const Time& endTime) const {
        Time tadd;
        int startsec = hrs * 3600 + mint * 60 + sec;
        int endsec = endTime.hrs * 3600 + endTime.mint * 60 + endTime.sec;
        int addt = endsec + startsec;
        tadd.hrs = addt / 3600;
        tadd.mint = (addt % 3600) / 60;
        tadd.sec = addt % 60;

        return addt;
    }

    void display() const {
        cout << hrs << " hrs, " << mint << " min, " << sec << " sec." << endl;
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

    Time tadd = startTime.calctadd(endTime);

    cout << "Time Addition: ";
    tadd.display();
    return 0;
}
