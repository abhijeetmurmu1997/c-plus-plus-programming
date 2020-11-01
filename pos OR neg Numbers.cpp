#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	system("cls");
	int number;
	cout<<"Enter the Number:";
	cin>>number;
	if(number>0)
	{
		cout<<"The Number"<<ends<<number<<ends<<"is POSITIVE"<<endl;
	}
	else if(number==0)
	{
		cout<<"ZERO is entered"<<endl;
	}
	else
	cout<<"The Number"<<ends<<number<<ends<<"is NEGATIVE"<<endl;
	getch();
}
