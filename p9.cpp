#include<iostream>
using namespace std;
template <class t>
#define SIZE 5
t Q[SIZE];
int r=-1,f=-1;


class QU
{ public:
  void add(t);
  void del();
  void disp(); 
   
     
};

void QU::add(t item)
{  
     if(r==SIZE-1)
      cout<<"QUEUE IS FULL";
     else
      {
         if(r==-1)
         r=f=0;
         else
         r++;
         Q[r]=item;
         
      }

}

void QU::del()
{
  if(f==-1)
  cout<<"Queue is EMPTY\n";
  else
  {
    if(f==r)
    f=r=-1;
    else
    f++;
  }
}

void QU::disp()
{
   if(r==-1)
   cout<<"QUEUE IS EMPTY\n";
   else
   {
   for(int i=f;i<r;i++)
    {
       cout<<Q[i]<<"\t";
    }
   }
}

int main()
{
  QU <int>q1;
  QU <float>q2;
  int ch,choice,ele,a;

while(1) 
{
   cout<<"1.INTEGER QUEUE\n2.FLOAT QUEUE\n";
   cin>>ch;

if(ch==1)
 { a=0;
  do  
  { 
 cout<<"\n---MENU---\n1.ADD\n2.\n2.Delete\n3.DISPLAY";
      cin>>choice;
      switch(choice)
        {
           case 1:
           cout<<"Enter the element\n";
	   cin>>ele;
	   q1.add(ele);
  	   break;
         
           case 2:
           q1.del();
 	   break;
  
     	   case 3:
           q1.disp();
 	   break;
           
           case 4:
            a=1;break;
           default:
           cout<<"INVALID CHOICE\n"; 
               		 	
	}
    
  }
      
 }while(a==0);
 }
 
else
  { a=0;

     do  
  { 
 cout<<"\n---MENU---\n1.ADD\n2.\n2.Delete\n3.DISPLAY";
      cin>>choice;
      switch(choice)
        {
           case 1:
           cout<<"Enter the element\n";
	   cin>>ele;
	   q2.add(ele);
  	   break;
         
           case 2:
           q2.del();
 	   break;
  
     	   case 3:
           q2.disp();
 	   break;
           
           case 4:
            a=1;break;
           default:
           cout<<"INVALID CHOICE\n"; 
               		 	
	}
    
  }
      
 }while(a==0);

  }
}
