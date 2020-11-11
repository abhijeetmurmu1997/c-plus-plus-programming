#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number:";
	cin>>num;
	int rem = 0,sum = 0;
	int temp = num;
	while(temp!=0)
	{
		rem = temp%10;
		sum = sum+rem;
		temp = temp/10;
	}
	if(num%sum == 0)
	{
		cout<<"HARSHAD NUMBER."<<endl;
	}
	else
	cout<<"NOT AN HARSHAD NUMBER."<<endl;
	getch();
}
