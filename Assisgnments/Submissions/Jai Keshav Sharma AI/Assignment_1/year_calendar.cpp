#include<bits/stdc++.h>
using namespace std;

int dayNumber(int day, int month, int year) {
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    year -= month < 3;
    return ( year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
}

string getMonthName(int monthNumber) {
    string months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    return months[monthNumber-1]; // subtract 1 because array index starts from 0
}

int numberOfDays (int monthNumber, int year) {
    if (monthNumber == 2) {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100!= 0))
            return 29;
        else
            return 28;
    }
    else if (monthNumber == 4 || monthNumber == 6 || monthNumber == 9 || monthNumber == 11)
        return 30;
    else
        return 31;
}

void printCalendar(int year) {
    printf("         Calendar - %d\n\n", year);
    int days;
    int current = dayNumber (1, 1, year);
    for (int i = 0; i < 12; i++) {
        days = numberOfDays (i+1, year); // add 1 because monthNumber starts from 1
        printf("\n  ------------%s-------------\n", getMonthName(i+1).c_str()); // add 1 because monthNumber starts from 1
        printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
        int k;
        for (k = 0; k < current; k++)
            printf("     ");
        for (int j = 1; j <= days; j++) {
            printf("%5d", j);
            if (++k > 6) {
                k = 0;
                printf("\n");
            }
        }
        if (k)
            printf("\n");
        current = k;
    }
    return;
}

int main(){
    int year = 2024;
    printCalendar(year);
    return 0;
}