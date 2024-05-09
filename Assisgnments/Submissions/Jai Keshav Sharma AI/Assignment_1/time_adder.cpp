#include <bits/stdc++.h>
using namespace std;

class time
{
    int hour;
    int min;
    int second;

public:
    void setdata(int, int, int);
    void addTimes(time &, time &);
    void dispSum();
}t1, t2, t3;

void time ::setdata(int h, int m, int s)
{
    hour = h;
    min = m;
    second = s;
}
void time ::addTimes(time &o1, time &o2)
{
    hour = o1.hour + o2.hour;
    min = o1.min + o2.min;
    second = o1.second + o2.second;
}
void time ::dispSum()
{
    cout << "sum is: " << hour << " hours, " << min << " mins, " << second << " seconds" << endl;
}
int main()
{
    
    
    t1.setdata(7, 8, 9);
    t2.setdata(10, 11, 12);

    t3.addTimes(t1, t2);

    t3.dispSum();

    return 0;
}