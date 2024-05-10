#include<bits/stdc++.h>
using namespace std;

int day_of_month(int day, int month, int year) {
  /* Zeller's rule to calculate day */

  int t[] = {11,12,1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  if (month < 3 ) {
    year -= 1;
  }
  int D = 0, C = 0;
  string temp = to_string(year);
  string first_two = temp.substr(0, 2);
  string last_two = temp.substr(2, 2);
  D = stoi(last_two);
  C = stoi(first_two);

  return (day + ((13 * t[month-1] - 1) / 5) + D + (D/4) + (C/4) - 2*C) % 7;
}


int no_of_day(int month , int year) {
  if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
    return 31;
  }
  if (month == 4 || month == 6 || month == 9 || month == 11) {
    return 30;
  }

  if ((year % 4 == 0 && year % 100 != 0) || (year %4 == 0 && year % 100 == 0 && year % 400 == 0)) {
    return 29;
  }
  else {
    return 28;
  }
}

string monthName(int month) {
  switch (month)
  {
  case 1: return "JANUARY";
  case 2: return "FEBRUARY";
  case 3: return "MARCH";
  case 4: return "APRIL";
  case 5: return "MAY";
  case 6: return "JUNE";
  case 7: return "JULY";
  case 8: return "AUGUST";
  case 9: return "SEPTEMBER";
  case 10: return "OCTOBER";
  case 11: return "NOVEMBER";
  case 12: return "DECEMBER";

  default:
    return "Invalid month ! Please enter a valid month.";
  }
}

void printCalendar(int month, int year) {
  cout << " --- " << monthName(month) << " --- " << endl;
  cout << "SUN  MON  TUE  WED  THU  FRI  SAT\n";
  int start = day_of_month(1, month, year);
  for (int i = 0; i < start; i++) {
    cout << "     ";
  }


  for (int j = 1; j <= no_of_day(month, year); j++) { 
    cout << setw(3) << j << "  ";
    start++;
    if (start > 6) {
      cout << "\n";
      start = 0;
    }
  }

  cout << endl;
  cout << "-------xxxxx-------------xxxxx---------" << endl;
}

int main () {

  int year;
  cout << "Enter the year: ";
  cin >> year;


  for (int i = 1; i <= 12 ; i++) {
    printCalendar(i, year);
  }



  return 0;
}