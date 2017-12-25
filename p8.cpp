#include<fstream>
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{   
        char data[100];
        ofstream file;
        file.open("abc.txt");

        cout<<"\n Enter the Name\n";
	cin>>data;
	file<<data<<endl;

	cout<<"\nEnter the Department\n";
	cin>>data;
	file<<data<<endl;

	cout<<"\nEnter the USN\n";
        cin>>data;
	file<<data<<endl;

	cout<<"\nEnter the SEM\n";
        cin>>data;
	file<<data<<endl;

        file.close();

        ifstream file1;
        file1.open("abc.txt");

	cout<<"Name:";
	file1>>data;
	cout<<data<<endl;

	cout<<"Department:";
	file1>>data;
	cout<<data<<endl;

	cout<<"USN:";
        file1>>data;
	cout<<data<<endl;

	cout<<"SEM:";
        file1>>data;
	cout<<data<<endl;

	file1.close();
        
        
  return 0;
}
