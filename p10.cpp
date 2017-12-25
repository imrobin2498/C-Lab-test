#include<iostream>
using namespace std;

template <class t>
void bubble(t a[],int n)
{
  for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
          {
             if(a[j]>a[j+1])
               {
                  t temp;
                  temp=a[j];
                  a[j]=a[j+1];
                  a[j+1]=temp;
               }
           }
     }
}

int main()
{
   int A[15];float B[15];int n,a=0,ch; 
do
{

cout<<"\n----MENU---\n1.INTEGER SORT\n2.DECIMAL SORT\n3.EXIT\n";
cout<<"ENTER YOUR CHOICE\n";cin>>ch;
switch(ch)

  {
	case 1:
	cout<<"Enter the array size\n";
	cin>>n;
	cout<<"enter the elements(INTEGERS)\n"; 
	for(int i=0;i<n;i++)
	cin>>A[i];
	bubble(A,n);
	cout<<"SORTED ARRAY(INTEGER) IS \n";
	for(int i=0;i<n;i++)
	{ 
           cout<<A[i]<<"\t";
        }
		
	break;
	
	case 2:
	cout<<"Enter the array size\n";
	cin>>n;
	cout<<"enter the elements(FLOAT)\n"; 
	for(int i=0;i<n;i++)	
	cin>>B[i];
	bubble(B,n);
	cout<<"SORTED ARRAY(FLOAT) IS \n";
	for(int i=0;i<n;i++)
        {   	
 	  cout<<B[i]<<"\t";
	}
	break;

case 3:
a=1;break;
 
default:

cout<<"WRONG CHOICE";

}
}while(a==0);


return 0;
}

