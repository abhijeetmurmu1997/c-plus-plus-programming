#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int num, flag = 0;
	cout<<"Enter the number:";
	cin>>num;
	for(int i=2;i<=num/2;i++)
	{
		if(num%i == 0)
		{
			flag = 1;
		}
	}
	if(flag == 0)
	{
		cout<<num<<ends<<"is prime number."<<endl;
	}
	else
	{
		cout<<num<<ends<<"is not a prime number."<<endl;
	}
	getch();
}
