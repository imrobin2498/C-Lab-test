#include<iostream> 
#include<stdio.h>
using namespace std;
#define MAX 6
template <class t>
class queue
{ public:
  t Q[MAX];
  int r,f;
  queue()
   {
     r=-1;f=-1;
   }
  void add(t item);
  void del();
  void disp();

 
};
template <class t>
 void queue<t>::add(t item)
{  
     if(r==MAX-1)
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


template <class t>
void queue<t>::del()
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


template <class t>
void queue<t>::disp()
{
   if(r==-1)
   cout<<"QUEUE IS EMPTY\n";
   else
   {
   for(int i=f;i<=r;i++)
    {
       cout<<Q[i]<<"\t";
    }
   }
}


int main()
{
  queue <int>q1;
  queue <float>q2;
  int choice,e1,a=0;float e2;
   do  
     { 
 
   cout<<"\n---MENU---\n1.INSERT(integer Queue) \n2.DELETE(integer Queue)\n3.INSERT(float queue)\n4.DELETE(float Queue)\n5.DISPLAY(integer)\n6.DISPLAY(float)\n 7.EXIT\n";
      cin>>choice;
      switch(choice)
         {
           case 1:
           cout<<"Enter the element\n";
	   cin>>e1;
	   q1.add(e1);
  	   break;
         
           case 2:
	   q1.del();	 
           break;
  
     	   case 3:
           cout<<"Enter the element\n";
	   cin>>e2;
	   q2.add(e2);		
           break;
           
           case 4:
           q2.del();
           break;
            
           case 5:
	 //  cout<<"INTEGER QUEUE\n";
	   q1.disp();
	   break;
          
           case 6:
	   //cout<<"FLOAT QUEUE\n";
	   q2.disp();
	   break;
		
	   case 7:a=1;
           break;		
          
          default:
           cout<<"INVALID CHOICE\n"; 
               		 	
	 }    
       
    }while(a==0);
   
}
