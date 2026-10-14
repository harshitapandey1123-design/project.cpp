#include<iostream>
using namespace std;
class vehicle
{
    protected:
    string vehiclenumber;
    string ownername;
    public:
    int hour;
    int rate;
    void showdetails()
    {
        cout<<"...vehicle bill management system..."
        cout<<"owner name,vehile number,hours"<<endl;
    }
    virtual void calculatefee()
    {
        cout<<"fee="<<rate*hour<<endl;
    }
};
class bike:public vehicle
{
    public:
    void showdwtails1()
    {
        cout<<"ankit","UP12345",1<<endl;
    }
    virtual void calculatefee()
    {
        cout<<"fee="<<10*1<<endl;
    }
};
class car:public vehicle
{
    public:
    void showdwtails2()
    {
        cout<<"arpit","UP98645",2<<endl;
    }
    virtual void calculatefee()
    {
        cout<<"fee="<<20*2<<endl;
    }
};
class truck:public vehicle
{
    public:
    void showdwtails3()
    {
        cout<<"mayank","UP65578",5<<endl;
    }
    virtual void calculatefee()
    {
        cout<<"fee="<<30*5<<endl;
    }
};
int main()
{
    vehicle v;
    bike b;
    car c;
    truck t;
    v.showdetails();
    b.showdetails1();
    c.showdetails2();
    t.showdetails3();
    b.calculatefee1();
    c.calculatefee2();
    t.calculatefee3();
  return 0;
}

