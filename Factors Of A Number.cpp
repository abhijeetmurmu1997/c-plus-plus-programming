#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int num;
	cout<<"Enter the Number:";
	cin>>num;
	int i;
	for(i=1;i<=num;i++)
	{
		if(num%i == 0)
		{
			cout<<i<<endl;
		}
	}
	getch();
}
