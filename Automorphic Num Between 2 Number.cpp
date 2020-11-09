#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int l,u;
	cout<<"Enter the LOWER LIMIT:";
	cin>>l;
	cout<<"Enter the UPPER LIMIT:";
	cin>>u;
	for(int i = l;i <= u;i++)
	{
		int temp = i, count  = 0;
		int dou = i*i;
		while(temp!=0)
		{
			count++;
			temp = temp/10;
		}
		int mul = 1,sum = 0;
		for(int j = 1;j <= count;j++)
		{
			mul = mul*10;
		}
		sum = dou%mul;
		if(sum == i)
		{
			cout<<i<<endl;
		}
	}
	getch();
}
