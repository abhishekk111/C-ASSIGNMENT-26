#include<iostream>
using namespace std;
class Date
{
  private:
    int dd;
    int mm;
    int yyyy;

  public:
      Date(int d, int m, int y)
      {
         dd=d;
         mm=m;
         yyyy=y;
      }

      void showData()
      {
         cout<<"Date is "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
      }
};
int main()
{
    cout<<"Date format DD/MM/YYYY is: "<<endl;
    Date d1(4,8,2022);
    cout<<endl;
    d1.showData();
    return 0;
}

