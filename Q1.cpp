#include<iostream>
using namespace std;
class Complex
{
  private:
    int real;
    int img;

  public:
      void setData(int r, int i)
      {
          real=r;
          img=i;
      }

      void showData()
      {
         cout<<real<<" + "<<img<<"i"<<endl;
      }
      Complex add(Complex C)
      {
          Complex temp;
          temp.real=real+C.real;
          temp.img=img+C.img;
          return temp;
      }

};
int main()
{
    Complex c1,c2,c3;
    c1.setData(3,2);
    c2.setData(5,3);
    c3=c1.add(c2);

    c1.showData();
    c2.showData();
    cout<<endl;
    cout<<"Addition of Complex number is: "<<endl;
    c3.showData();


    return 0;
}
