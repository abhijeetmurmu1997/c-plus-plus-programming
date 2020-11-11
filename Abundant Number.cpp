#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the Number:";
	cin>>num;
	int sum = 0;
	for(int i = 1;i < num;i++)
	{
		if(num%i == 0)
		{
			sum = sum+i;
		}
	}
	if(sum>num)
	{
		cout<<"ABUNDANT NUMBER."<<endl;
	}
	else
	cout<<"NOT AN ABUNDANT NUMBER."<<endl;
	getch();
}
