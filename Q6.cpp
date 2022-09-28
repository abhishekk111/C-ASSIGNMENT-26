#include<iostream>
#include<string.h>
#include  <bits/stdc++.h>
using namespace std;
class Student
{
  private:
    char grade;
    int Rollno;
    int Class;

  public:
      Student(char g, int r, int c)
      {
         grade=g;
         Rollno=r;
         Class=c;
      }

      void showData()
      {
         cout<<"Student details is:\n"<<"Grade: "<<grade<<endl<<"RollNumber: "<<Rollno<<endl<<"Class: "<<Class<<endl;
      }
};
int main()
{
    Student s1('A',121,12);
    cout<<endl;
    s1.showData();
    return 0;
}
