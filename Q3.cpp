#include<iostream>
using namespace std;
class Cube
{
  private:
    double a;

  public:
      void setSide(double x)
      {
          a=x;
      }
      double getSide()
      {
          return a;
      }
      Cube(double y)           //paramitraized constructor
      {
         cout<<"\nA constructor is called "<<endl;
         a=y;
      }
      Cube()
      {
          cout<<" \nA default constructor is called "<<endl;
      }
      double Volume()
      {
          return a*a*a;
      }
};
int main()
{
    Cube c1(2.34);
    Cube c2;
    cout<<"\n The side of cube is: "<<c1.getSide()<<endl;
    cout<<"\n The volume of first cube is: "<<c1.Volume()<<endl;
    c2.setSide(2);
    cout<<"\n The volume of second cube of side: "<<c2.getSide()<<" is "<<c2.Volume()<<endl;
    cout<<endl;

    return 0;
}
