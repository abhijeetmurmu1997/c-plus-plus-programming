#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int a,b;
	cout<<"Enter the value of a and b"<<endl;
	cin>>a>>b;
	if(a>b)
	{
		cout<<a<<ends<<"is Greater than"<<ends<<b<<endl;
	}
	else if(b>a)
	{
		cout<<b<<ends<<"is Greater than"<<ends<<a<<endl;
	}
	else
	cout<<a<<" and "<<b<<ends<<"are equal"<<endl;
	getch();
}
