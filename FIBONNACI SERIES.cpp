#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	long n;
	long a = 0,b = 1,c;
	cout<<"Enter the series:";
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		cout<<a<<endl;
		c = a+b;
		a = b;
		b = c;
	}
	getch();
}
