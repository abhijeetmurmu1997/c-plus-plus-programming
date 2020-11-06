#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,rem = 0,sum = 0;
	cout<<"Enter the Number:";
	cin>>num;
	int temp = num;
	while(temp!=0)
	{
		rem = temp%10;
		int fact = 1;
		for(int j = 1;j<=rem;j++)
		{
			fact = fact*j;
		}
		sum = sum+fact;
		temp = temp/10;
	}
	if(sum == num)
	{
		cout<<"STRONG NUMBER."<<endl;
	}
	else
	cout<<"NOT A STRONG NUMBER."<<endl;
	getch();
}

