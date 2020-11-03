#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int year;
	cout<<"Enter the Year : ";
	cin>>year;
	if((year%400 == 0) || (year%4 == 0 && year%100 != 0) )
	{
		cout<<year<<ends<<"is a LEAP YEAR."<<endl;
	}
	else
	cout<<year<<ends<<"is not an LEAP YEAR."<<endl;
	getch();
}
