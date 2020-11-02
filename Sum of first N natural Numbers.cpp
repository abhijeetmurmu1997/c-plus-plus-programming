#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int n,sum = 0;
	cout<<"Enter the number:";
	cin>>n;
	sum = (n*(n+1)/2);
	cout<<"SUM:"<<sum<<endl;
	getch();
}
