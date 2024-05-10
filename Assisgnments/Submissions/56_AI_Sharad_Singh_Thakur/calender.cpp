#include <iostream>
using namespace std;

class Calender{
    public:
    int dayNumber(int day, int month, int year) 
{   
  static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1,4, 6, 2, 4 }; 
    year -= month < 3; 
    
    return ( year + year/4 - year/100 + 
             year/400 + t[month-1] + day) % 7; 
} 
string getMonthName(int monthNumber) 
{ 
    string months[] = {"January", "February", "March", 
                       "April", "May", "June", 
                       "July", "August", "September", 
                       "October", "November", "December"
                      }; 
  
    return (months[monthNumber]); 
} 
int numberOfDays (int monthNumber, int year) 
{ 
  int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
  if (monthNumber == 1) 
    { 
        if (year % 400 == 0 || 
                (year % 4 == 0 && year % 100 != 0)) 
            month[1]=29; 
    } 
    return month[monthNumber];
}
void printCalendar(int year) 
{ 
    printf ("\n\n         Calendar - %d\n\n", year); 
    int days; 
    int current = dayNumber (1, 1, year); 
    for (int i = 0; i < 12; i++) 
    { 
        days = numberOfDays (i, year); 
        printf("\n  ------------%s-%d-------------\n", getMonthName (i).c_str(),year);
        printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n"); 
        int k; 
        for (k = 0; k < current; k++) 
            printf("     "); 
  
        for (int j = 1; j <= days; j++) 
        { 
            printf("%5d", j); 
            if (++k > 6) 
            { 
                k = 0; 
                printf("\n"); 
            } 
        } 
  
        if (k) 
            printf("\n"); 
  
        current = k; 
    }  
}
};

int main(){
    Calender c1;
    c1.printCalendar(100);
    return 0;
}