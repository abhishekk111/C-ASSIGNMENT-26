#include<iostream>
using namespace std;
class Bank
{
  private:
    float p;
    float r;
    float y;

  public:
      void setPrincipal(float P)
      {
          p=P;
      }
      void setRate(float R)
      {
         r=R;
      }
      void setYear(float Y)
      {
          y=Y;
      }
      float getPrincipal()
      {
          return p;
      }
      float getRate()
      {
          return r;
      }
      float getYear()
      {
          return y;
      }
      Bank(float P,float R,float Y)           //paramitraized constructor
      {
         cout<<"\nA constructor is called "<<endl;
         p=P;
         r=R;
         y=Y;
      }
      Box()
      {
          cout<<" \nA default constructor is called "<<endl;
      }
      float SI()
      {
          return (p*r*y)/100;
      }
};
int main()
{
    Bank b1(1000,5,10);
    cout<<"The simple interest is: "<<b1.SI()<<endl;
    cout<<endl;

    return 0;
}
