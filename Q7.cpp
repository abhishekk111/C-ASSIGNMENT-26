#include<iostream>
using namespace std;
class Box
{
  private:
    double l;
    double b;
    double h;

  public:
      void setlength(double L)
      {
          l=L;
      }
      void setbreadth(double B)
      {
          b=B;
      }
      void setheight(double H)
      {
          h=H;
      }
      double getlength()
      {
          return l;
      }
      double getbreadth()
      {
          return b;
      }
      double getheight()
      {
          return h;
      }
      Box(double L,double B, double H)           //paramitraized constructor
      {
         cout<<"\nA constructor is called "<<endl;
         l=L;
         b=B;
         h=H;
      }
      Box()
      {
          cout<<" \nA default constructor is called "<<endl;
      }
      double VolumeOfBox()
      {
          return l*b*h;
      }
};
int main()
{
    Box b1(2.34,4,5.67);
    Box b2;
    cout<<"\n The l,b,h of Box is: "<<b1.getlength()<<" , "<<b1.getbreadth()<<" , "<<b1.getheight()<<endl;
    cout<<"\n The volume of Box is: "<<b1.VolumeOfBox()<<endl;
    cout<<endl;

    return 0;
}
