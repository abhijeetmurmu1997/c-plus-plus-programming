#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	system("cls");
	int num;
	cout<<"Enter the number:";
	cin>>num;
	int temp = num;
	int rem = 0,sum = 0;
	while(temp!=0)
	{
		rem = temp%10;
		sum = sum*10+rem;
		temp = temp/10;
	}
	if(sum == num)
	{
		cout<<"The number"<<ends<<sum<<ends<<"matches with the initial number"<<ends<<num<<".So it's a Palindrome."<<endl;
	}
	else
	cout<<"The number"<<ends<<sum<<ends<<"doesn't match with the initial number"<<ends<<num<<".So it's not a Palindrome."<<endl;
	getch();
}
