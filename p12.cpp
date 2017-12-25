#include<iostream>
using namespace std;
class B;
class A
{
  int data;
   public:
   void setvalue(int value)
     {
         data=value;
     }
   friend void add(A,B);
};

class B
{
  int data;
  public:
   void setvalue(int value)
     {
         data=value;
     }
   friend void add(A,B);
};

void add(A a,B b)
{
  cout<<"The sum of nos is"<<a.data+b.data<<endl;
}

int main()
{
  A a1;
  B b1;
  int n1,n2;
  cout<<"enter the 1st number\n";
  cin>>n1;
  a1.setvalue(n1);
  cout<<"enter the 2nd number\n";
  cin>>n2;
  b1.setvalue(n2);
  add(a1,b1);
  return 0;
}
