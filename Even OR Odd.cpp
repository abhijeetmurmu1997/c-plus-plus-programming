#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int number;
	cout<<"Enter the Number:";
	cin>>number;
	if(number%2 == 0)
	{
		cout<<"The Number"<<ends<<number<<ends<<"is EVEN."<<endl;
	}
	else
	cout<<"The Number"<<ends<<number<<ends<<"is ODD."<<endl;
	getch();
}
