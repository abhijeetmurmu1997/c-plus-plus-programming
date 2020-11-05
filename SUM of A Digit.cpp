#include<iostream>
#include<stdlib.h>
#include<conio.h>
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
		sum = sum+rem;
		temp = temp/10;
	}
	cout<<"SUM:"<<sum<<endl;
	getch();
}
