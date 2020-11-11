#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int l,u;
	cout<<"ENTER THE LOWER LIMIT:";
	cin>>l;
	cout<<"ENTER THE UPPER LIMIT:";
	cin>>u;
	for(int i = l;i <= u;i++)
	{
		int sum = 0;
		for(int j = 1;j < i;j++)
		{
			if(i%j == 0)
			{
				sum+=j;
			}
		}
		if(sum>i)
		{
			cout<<i<<endl;
		}
	}
	getch();
}
