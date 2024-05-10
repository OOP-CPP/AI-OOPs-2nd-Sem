#include<iostream>
 using namespace std;
 class Time
 {
  private:
   int hour,minute,second;
  public:
   Time()
   {
    hour=minute=second=0;
    }
   void input()
   {
    cout <<"Enter hour:"<< endl;
    cin>>hour;
    cout<<"Enter minute:"<<endl;
    cin>>minute;
    cout<<"Enter second:"<<endl;
    cin>>second;
    }
   void display()
   {
    cout<<endl<<"Hour:"<<hour<<endl;
    cout<<"Minute:"<<minute<<endl;
    cout<<"Second:"<<second<<endl;
    }
 };
 int main()
 {
 
  Time obj1,obj2;
  obj1.input();
  obj2.input();
  obj1.display();
  obj2.display();
  return 0;
  }

