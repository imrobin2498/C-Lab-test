#include<iostream>
using namespace std;

class V
{
  int *x;
  public:
  V()
   {
      x=new int;
      *x=100;
      cout<<"DEFAULT CONSTRUCTOR CALLED\n";  
   }
  V(int k)
   {
     x=new int;
     *x=k;
     cout<<"PARAMATERIZED CONSTRUCTOR CALLED\n";
   }
  
  V(V &v)
   {
     x=new int;
     *x=*v.x;
     cout<<"COPY CONSTRUCTOR CALLED\n";
     
   }
  
   ~V()
    {
       cout<<"DESTRUCTOR CALLED\n";
    }


int dis()
{
 return *x;
}

};

int main ()
{
V v1,v2(20);
V v3=v1;
cout<<v1.dis()<<endl<<v2.dis()<<endl<<v3.dis()<<endl;
return 0;
}

