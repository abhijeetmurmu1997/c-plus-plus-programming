#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
	int l,u;
	int flag;
	cout<<"Enter the LOWER LIMIT:";
	cin>>l;
	cout<<"Enter the UPPER LIMIT:";
	cin>>u;
	for(int i=l;i<=u;i++)
	{
		if(i == 0||i == 1)
		continue;
		flag = 0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j == 0)
			{
				flag = 1;
			}
		}
		if(flag == 0)
		{
			cout<<i<<endl;
		}
	}
	getch();
}
