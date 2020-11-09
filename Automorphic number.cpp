#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int num;
	cout<<"Enter the Number:";
	cin>>num;
	int dou = num*num;
	int node = num,count = 0;
	while(node!=0)
	{
		count++;
		node = node/10;
	}
	int mul = 1,sum = 0;
	for(int i = 1;i <= count; i++)
	{
		mul = mul*10;
	}
	sum = dou%mul;
	if(sum == num)
	{
		cout<<"AUTOMORPHIC NUMBER."<<endl;
	}
	else
	cout<<"NOT AN AUTOMORPHIC NUMBER"<<endl;
	getch();
}
