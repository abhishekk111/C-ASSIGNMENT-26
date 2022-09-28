#include<iostream>
using namespace std;
class Time
{
    private:
        int hour;
        int minute;
        int second;
    public:
        void setTime(int h,int m, int s)
        {
            hour=h;
            minute=m;
            second=s;
        }
        void showTime()
        {
            cout<<hour<<"hr "<<minute<<"min "<<second<<"sec"<<endl;
        }
        void normalize()
        {
            minute=minute+second/60;
            second=second%60;
            hour=hour+minute/60;
            minute=minute%60;
        }
        Time add(Time T)
        {
            Time temp;
            temp.hour=hour+T.hour;
            temp.minute=minute+T.minute;
            temp.second=second+T.second;
            temp.normalize();
            return temp;
        }

};
int main()
{
    Time t1,t2,t3;    //default constructor
    t1.setTime(5,50,30);
    t2.setTime(7,20,34);
    t3=t1.add(t2);     //operator overloading

    //printing results

    t1.showTime();
    t2.showTime();
    t3.showTime();
}
