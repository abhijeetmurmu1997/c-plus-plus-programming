#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	system("cls");
	int n;
	cout<<"Enter the natural numbers whose sum is to be calculated:";
	cin>>n;
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"SUM:"<<sum<<endl;
	getch();
}
