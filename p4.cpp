#include<iostream>
using namespace std;

class E
{
char name[20];
int no;long ph;
public:
int bs;
void getdata();
void disp();
};

class FT:public E
{
  public:
  int ts;
};

void E::getdata()
{
 cout<<"Enter employee name\n";
 cin>>name;
 cout<<"Enter the employee number\n";
 cin>>no;
 cout<<"Enter the Phone no\n";
 cin>>ph;
 cout<<"Enter the Basic Salary\n";
 cin>>bs;
}

void E::disp()
{
  cout<<"NAME:"<<name<<endl;
  cout<<"EMPLOYEE NO:"<<no<<endl;
  cout<<"PHONE NO:"<<ph<<endl;
  cout<<"BASIC SALARY"<<bs<<endl;
}

int main()
{
  FT F;
  F.getdata();
  F.disp();
  F.ts=10*F.bs;
  cout<<"Total Salary:"<<F.ts<<endl;
  return 0;
}
