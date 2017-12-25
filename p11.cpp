#include<iostream>
using namespace std;
#define M 7
int st[M];
int top=-1;
void push(int item)
{
  if(top==M-1)
   throw(top);
  else
   st[++top]=item;
}

void pop()
{
   if(top==-1)
   throw(top);
   else
   {
     cout<<st[top--]<<"  REMOVED \n";return;
   }
}
 
void disp()
{ 
  if(top==-1)
  throw(top);
  else
  { 
  for(int i=top;i>=0;i--)
   cout<<st[i]<<"  ";
  }
}

int main()
{

   int ch,n,a=0;

  try
  {
    do
     {
          cout<<"\n----Menu----\n1.PUSH\n2.POP\n3.DISPLAY\n4.exit\n";
          cin>>ch;
          switch(ch)
            {
                 case 1:
                  cout<<"Enter the element\n";
                  cin>>n;
                  push(n);
                  break;
                
                 case 2:
                  pop();break;
                 case 3:
                   disp();break;
                 case 4:
                   a=1;break;
                 default:
                   cout<<"WRONG CHOICE";
           
            }
     }while(a==0);
  }
         catch(int b)
         {
             if(b==M-1)
              cout<<"STACK IS FULL\n";
             else
              cout<<"STACK IS EMPTY\n";
              
         }
}
