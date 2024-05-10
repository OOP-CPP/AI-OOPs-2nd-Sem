#include<iostream>
#include<conio.h>
using namespace std;

int day = 0;
class Time
{
 int seconds;
 int minutes;
 int hours;

 public:


 void read()
 {
 cin>>hours>>minutes>>seconds;


 }

 Time operator +(Time t2)
 {
 int carry;
 Time sum;
 sum.seconds=(seconds+t2.seconds)%60;
 carry=(seconds+t2.seconds)/60;
 sum.minutes=(minutes+t2.minutes+carry)%60;
 carry=(minutes+t2.minutes+carry)/60;
 sum.hours=(hours+t2.hours+carry)%24;
 if ((hours+t2.hours+carry) >= 24){
    day++;
 }
 return sum;

 }

 void display()
 {
 cout<<"SUM = " << day <<" day(s) : " << hours <<" hours : "<<minutes<<" minutes : "<<seconds<<" seconds ";
 }

};
int main()
{
 Time obj1,obj2;

 cout<<" enter the first time (in HH:MM:SS ) : ";
 obj1.read();
 cout<<" enter the second time (in HH:MM:SS ) : ";
 obj2.read();

 Time result =obj1+obj2;

 result.display();

}