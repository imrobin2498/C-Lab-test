#include<iostream>
using namespace std;

float I(float p,float t=1.0,float r=0.12)
{
   return ((p*r*t)/100);
}

int main()
{
  cout<<"SI is "<<I(2000)<<endl;
  cout<<"SI is "<<I(2000,2)<<endl;
  cout<<"SI is "<<I(2000,2,0.24)<<endl;
  return 0;
}
