#include<iostream>
#include<math.h>
using namespace std;
#define pi 3.14159
class circle
 {
  public:
 float r;
  circle(float rad)
   {
       r=rad;
   }
  float ca()
  {
     return(pi*r*r);
  }
};

class  sector:public circle
{
   public:
   float a;
   sector(float ang,float r):circle(r)
   {
       a=ang;
   }
   
  float seca()
   {
     return(0.5*r*r*a);
   }
};

class segment:public circle
{
  public:
  float l;
  segment(float len,float r):circle(r)
    {
       l=len;
    }
 
   
  float sega()
  {
     float k;
     k=l/r;cout<<"@="<<k<<endl;
      return(0.5*r*r*(k-sin(k)));
  }
};

int main()
{
float r,a,l;
cout<<"Enter the radius\n";
cin>>r;
cout<<"Enter The sector angle\n";
cin>>a;
cout<<"Enter the segment length(ARC length)\n";
cin>>l;
sector s1(a,r);
segment s2(l,r);
cout<<"The Circle area is:"<<s1.ca()<<endl;
cout<<"The Sector area is:"<<s1.seca()<<endl;
cout<<"The Segment area is"<<s2.sega()<<endl;
return 0;
}
