#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int l,u;
	cout<<"Enter the lower limit:";
	cin>>l;
	cout<<"Enter the upper limit:";
	cin>>u;
	for(int i = l;i <= u;i++)
	{
		int temp  = i,rem = 0,sum = 0;
		while(temp!=0)
		{
			rem = temp%10;
			sum = sum+rem;
			temp = temp/10; 
		}
		if(i%sum == 0)
		{
			cout<<i<<endl;
		}
	}
	getch();
}
