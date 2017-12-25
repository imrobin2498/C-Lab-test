#include<iostream>
using namespace std;

class area
{
  int l,b,s; 
 public:
 
 area()
  {
    l=3;b=5;s=7;
  }
 void reca()
  {
    cout<<"Enter Length and Breadth of rectangle\n";
    cin>>l>>b;
    cout<<"Enter side of Square\n";
    cin>>s;
  }

 void disp()
  {
     cout<<"Rectangle area:"<<l*b<<endl;
     cout<<"Square area:"<<s*s<<endl;
  }
};

int main()
{
  area A1,A2;
  A2.reca();
  cout<<"Areas using default Values \n";
  A1.disp();
  cout<<"Areas using given Values\n";
  A2.disp();
  return 0;
}
