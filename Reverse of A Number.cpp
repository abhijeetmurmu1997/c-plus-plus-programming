#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the Number:";
	cin>>num;
	int temp = num;
	int rem = 0,sum = 0;
	while(temp!=0)
	{
		rem = temp%10;
		sum = sum*10+rem;
		temp = temp/10;
	}
	cout<<"The Reverse Order of the given input is:"<<sum<<endl;
	getch();
}
