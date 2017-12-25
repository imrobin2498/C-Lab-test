#include<iostream>
using namespace std;

inline int max(int a,int b, int c)
{  
  int big=0;
  if(a>b&&a>>c)
  big=a;
  else if(b>a&&b>c)
  big=b;
  else
  big=c;
  return big;
}

int main()
{
  int x,y,z,r;
  cout<<"Enter the Numbers\n";
  cin>>x>>y>>z;
  r=max(x,y,z); 
  cout<<"\nThe biggest of the three numbers is  "<<r<<endl;;
  return 0;
}
