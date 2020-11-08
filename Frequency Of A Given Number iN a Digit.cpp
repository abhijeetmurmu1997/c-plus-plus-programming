#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int num,val;
	cout<<"Enter the number:";
	cin>>num;
	cout<<"Enter the value:";
	cin>>val;
	int rem = 0,count=0;
	while(num!=0)
	{
		rem = num%10;
		if(rem == val)
		{
			count++;
		}
		num = num/10;
	}
	cout<<"No. of Counts:"<<count<<endl;
	getch();
}
