#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	system("cls");
	cout<<"Enter the Number:";
	cin>>num;
	int fact = 1;
	for(int i=1;i<=num;i++)
	{
		fact = fact*i;
	}
	cout<<"The factorial of"<<ends<<num<<ends<<"is:"<<fact<<endl;
	getch();
}
