#include<bits/stdc++.h>
using namespace std;

class Time {
  int hrs;
  int min;
  int sec;

  public:
    void setData() {
      int a, b ,c;
      cout << "Enter hour , minute and second respectively - ";
      cin >> a >> b >> c;
      hrs= a;
      min = b;
      sec = c;
    }
    void getData() {
      cout << hrs << ":" << min << ":" << sec << endl; 
    }
    void timeSum(Time t1, Time t2) {
      hrs = t1.hrs + t2.hrs;
      min = t1.min + t2.min;
      sec = t1.sec + t2.sec;
    }
};

int main () {

  Time t1 , t2, t3;
  t1.setData();
  cout << "t1 : ";
  t1.getData();
  t2.setData();
  cout << "t2 : ";
  t2.getData();
  t3.timeSum(t1, t2);
  cout << "Sum of t1 and t2 is : ";
  t3.getData();


  return 0;
}