#include<iostream>
using namespace std;

struct student
{
  char name[15],dept[10];
  int usn,sem;
}S[5];

int main()
{   
  struct student S[5];

for(int i=0;i<5;i++)
  {
        cout<<"Entering details of student\n";
        cout<<"\n Enter the Name\n";
	cin>>S[i].name;
	cout<<"\nEnter the Department\n";
	cin>>S[i].dept;
	cout<<"\nEnter the USN\n";
        cin>>S[i].usn;	
	cout<<"\nEnter the SEM\n";
        cin>>S[i].sem;	
   }

 for(int j=0;j<5;j++)
  {
        cout<<"\nStudent DETAILS \n";
       	cout<<S[j].name<<endl;
	cout<<S[j].dept<<endl;
	cout<<S[j].usn<<endl;	
	cout<<S[j].sem<<endl;		
	cout<<"----------------"<<endl;     
 } 
 
 
  return 0;
}
