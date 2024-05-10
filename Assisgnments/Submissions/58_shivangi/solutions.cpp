#include<iostream>
using namespace std;

class complex
{
    int r,i;
    public:
           void get()
           {
            cout<<"\n enter real part::";
            cin>>r;
            cout<<"\nenter imaginary part::";
            cin>>i;
           }
           void disp()
           {
            cout<<r<<"+"<<i<<"i"<<"\n";
           }
           void sum(complex,complex);
};
void complex::sum(complex c1,complex c2)
{
    r=c1.r+c2.r;
    i=c1.i+c2.i;
}

int main()
{
    complex c1,c2,c3;
    cout<<"enter 1st complex number: \n";
    c1.get();
    cout<<"enter 2nd complex number: \n";
    c2.get();
    cout<<"\n first complex number is::";
    c1.disp();
    cout<<"\n second complex number is::";
    c2.disp();
    c3.sum(c1,c2);
    cout<<"\n the sum of two complex no is::";
    c3.disp();
    return 0;
}






//SOLUTION 2

#include<iostream>
using namespace std;

class clock
{
    int h,m,s;
    public:
           void get()
           {
            cout<<"\n enter hour part::";
            cin>>h;
            cout<<"\n enter minute part::";
            cin>>m;
            cout<<"\nenter second part::";
            cin>>s;
           }
           void disp()
           {
            cout<<h<<":"<<m<<":"<<s<<"\n";
           }
           void sum(clock,clock);
};
void clock::sum(clock c1,clock c2)
{
    h=c1.h+c2.h;
    m=c1.m+c2.m;
    s=c1.s+c2.s;
}
int main()
{
    clock c1,c2,c3;
    cout<<"enter 1st time: \n";
    c1.get();
    cout<<"enter 2nd time: \n";
    c2.get();
    cout<<"\n first time is::";
    c1.disp();
    cout<<"\n second time is::";
    c2.disp();
    c3.sum(c1,c2);
    cout<<"\n the sum of two time is::";
    c3.disp();
    return 0;
}








//SOLUTION 3

#include <iostream>
#include <iomanip>


bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}


int daysInMonth(int month, int year) {
    switch (month) {
        case 2:
            return isLeapYear(year) ? 29 : 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}


void printCalendar(int month, int year) {
    
    std::cout << std::setw(20) << std::setfill(' ') << std::right << month << " " << year << std::endl;

    
    std::cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat" << std::endl;

   
    int startDay = 1; 
    for (int i = 1900; i < year; ++i) {
        startDay += isLeapYear(i) ? 366 : 365;
    }
    for (int i = 1; i < month; ++i) {
        startDay += daysInMonth(i, year);
    }
    startDay %= 7;

    
    for (int i = 0; i < startDay; ++i) {
        std::cout << std::setw(5) << " ";
    }

    
    int days = daysInMonth(month, year);
    for (int day = 1; day <= days; ++day) {
        std::cout << std::setw(5) << day;
        if ((startDay + day) % 7 == 0) { 
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}

int main() {
    int year = 2024;

    
    for (int month = 1; month <= 12; ++month) {
        printCalendar(month, year);
        std::cout << std::endl;
    }

    return 0;
}
