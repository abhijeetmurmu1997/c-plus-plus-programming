#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int base,exp;
	cout<<"Enter the Number:";
	cin>>base;
	cout<<"Enter the Exponent:";
	cin>>exp;
	int res = 1;
	for(int i=1;i<=exp;i++)
	{
		res = res*base;
	}
	cout<<"The power of"<<ends<<base<<ends<<"with exponent"<<ends<<exp<<ends<<"is:"<<res<<endl;
	getch();
}
