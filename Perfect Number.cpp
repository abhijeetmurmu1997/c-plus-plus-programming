#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int num;
	cout<<"Enter the number:";
	cin>>num;
	int temp = num,sum = 0;
	for(int i = 1;i < temp;i++)
	{
		if(temp%i == 0)
		{
			sum = sum+i;
		}
	}
	if(sum == num)
	{
		printf("PERFECT NUMBER.");
	}
	else
	printf("NOT A PERFECT NUMBER.");
	getch();
}
