#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int a,b,c;
	cout<<"Enter the value of a b and c"<<endl;
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<a<<" is Greater than "<<b<<" and "<<c<<endl;
	}
	else if(b>c && b>a)
	{
		cout<<b<<" is Greater than "<<a<<" and "<<c<<endl;
	}
	else if(c>a && c>b)
	{
		cout<<c<<" is Greater than "<<a<<" and "<<b<<endl;
	}
	getch();
}
