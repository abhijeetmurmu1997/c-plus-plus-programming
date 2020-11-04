#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	system("cls");
	int num,count = 0;
	cout<<"Enter the number:";
	cin>>num;
	int temp = num;
	int tEMP = num;
	while(temp!=0)
	{
		count+=1;
		temp = temp/10;
	}
	int rem = 0,sum = 0;
	while(tEMP!=0)
	{
		rem = tEMP%10;
		int pow = 1;
		for(int i = 1;i <= count;i++)
		{
			pow = pow*rem;
		}
		sum = sum+pow;
		tEMP = tEMP/10;
	}
	if(sum == num)
	{
		cout<<"ARMSTRONG NUMBER."<<endl;
	}
	else
	cout<<"NOT AN ARMSTRONG NUMBER."<<endl;
	getch();
}
