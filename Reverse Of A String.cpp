#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char str[40];
	cin>>str;
	int length = 0;
	for(int i = 0;str[i] != '\0';i++)
	{
		length++;
	}
	for(int i = length-1;i >= 0;i--)
	{
		cout<<str[i];
	}
	getch();
}
