#include<iostream>
using namespace std;
class Counter
{
  private:
    static int count;

  public:
      Counter()
      {
          count++;
      }
      int getcount()
      {
          return count;
      }


};
int Counter::count;
int main()
{
    Counter c1,c2,c3;
    cout<<c1.getcount();

    return 0;
}


