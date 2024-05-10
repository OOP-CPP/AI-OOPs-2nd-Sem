#include <iostream>
using namespace std;

// Define a class to represent time
class Time
{
private:
    // Hours, minutes, and seconds are private data members
    int hrs;
    int mins;
    int secs;

public:
    
    // Default values are 0
    Time(int h = 0, int m = 0, int s = 0) : hrs(h), mins(m), secs(s) {}

    // Function to set time
    void setTime(int h, int m, int s)
    {
        hrs = h;  // Set hours
        mins = m; // Set minutes
        secs = s; // Set seconds
    }

    // Function to add two times
    Time sum(const Time &t2) const
    {
        // Add hours, minutes, and seconds
        int totalHrs = hrs + t2.hrs;
        int totalMins = mins + t2.mins;
        int totalSecs = secs + t2.secs;

        // If seconds is 60 or more, convert it to minutes
        if (totalSecs >= 60)
        {
            totalMins += totalSecs / 60;
            totalSecs %= 60;
        }
        // If minutes is 60 or more, convert it to hours
        if (totalMins >= 60)
        {
            totalHrs += totalMins / 60;
            totalMins %= 60;
        }

        // Return new time
        return Time(totalHrs, totalMins, totalSecs);
    }

    // Function to time
    void display() const
    {
        cout << "Total time: " << hrs << " hrs, " << mins << " min, " << secs << " sec." << endl;
    }
};

int main()
{
    // Variables to store hours, minutes, and seconds for two times
    int H1, M1, S1, H2, M2, S2;

    // inputs for first time
    cout << "Enter first time: "<< endl << "Hrs: ";
    cin >> H1;
    cout<<"Mins: "; 
    cin >> M1;
    cout<<"Secs: ";
    cin >> S1;

    // inputs for second time
    cout << "Enter second time: "<< endl << "Hrs :";
    cin >> H2;
    cout<<"Mins: "; 
    cin >> M2;
    cout<<"Secs: ";
    cin >> S2;

    // Creating two Time objects with user inputs
    Time time1(H1, M1, S1);
    Time time2(H2, M2, S2);

    // Add the time
    Time totalTime = time1.sum(time2);

    // total time
    totalTime.display();

    return 0;
}
