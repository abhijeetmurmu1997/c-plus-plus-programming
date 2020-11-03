#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int num,i = 2;
	int flag = 0;
	cout<<"Enter the number:";
	cin>>num;
	do
	{
		if(num%i == 0)
		{
			flag = 1;
		}
		i++;
	}
	while(i<=num/2);
	if(flag == 1)
	{
		cout<<num<<ends<<"is not a prime number."<<endl;
	}
	else
	cout<<num<<ends<<"is a prime number."<<endl;
	getch();
}
