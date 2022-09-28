#include<iostream>
using namespace std;
class Bill
{
private:
    int c_no;
    char c_name[20];
    int units;
    double bill;

public:
    void get()
    {
        cout<<"Enter Details of Customer Below :--> \n"<<endl;
        cout<<"Enter Customer No. :: ";
        cin>>c_no;
        cout<<"\nEnter Customer Name :: ";
        cin>>c_name;
        cout<<"\nEnter No. of Units used  :: ";
        cin>>units;

    }
    void put()
    {
        cout<<"\nEnter Details of Customer Below :--> \n"<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"\nCustomer No. is : "<<c_no;
        cout<<"\n\nCustomer Name is  : "<<c_name;
        cout<<"\n\nNo. of Units consumed : "<<units;
        cout<<"\n\nBill of Customer : "<<bill;
    }
    void cal_bill()
    {
        if(units<=100)
            bill=units*1.20;
        else if(units<=200)
            bill=100*1.20+(units-100)*2;
        else
            bill=100*1.20+100*2+(units-200)*3;
    }

};

int main()
{
    Bill b1;
    b1.get();
    b1.cal_bill();
    b1.put();
    cout<<endl;

    return 0;
}
