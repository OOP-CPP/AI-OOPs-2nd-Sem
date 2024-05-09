#include<iostream>
using namespace std;
struct time{
    int hr;
    int min;
    int sec;
};

time addtime(time t1,time t2){
    time sum;
    sum.sec=t1.sec+t2.sec;
    sum.min=t1.min+t2.min+sum.sec/60;
    sum.hr=t1.hr+t2.hr+sum.min/60;
    return sum;
}

int main(){
    time t1,t2,sum;
    cout<<"Enter first time(in hr min sec):";
    cin>>t1.hr>>t1.min>>t1.sec;
    cout<<"Enter second time(in hr min sec):";
    cin>>t2.hr>>t2.min>>t2.sec;
    sum=addtime(t1,t2);
    cout<<"sum:"<<sum.hr<<" "<<"hours"<<" "<<sum.min<<" "<<"minutes"<<" "<<sum.sec<<" "<<"seconds";
    return 0;
}