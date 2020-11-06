#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int l,u;
	cout<<"Enter the Lower Number:";
	cin>>l;
	cout<<"Enter the Upper Number:";
	cin>>u;
	for(int i = l;i <= u;i++)
	{
		int temp = i,rem = 0,sum = 0;
		while(temp!=0)
		{
			rem = temp%10;
			int fact = 1;
			for(int j = 1;j <= rem;j++)
			{
				fact = fact*j;
			}
			sum = sum+fact;
			temp = temp/10;
		}
		if(sum == i)
		{
			cout<<i<<endl;
		}
	}
	getch();
}
