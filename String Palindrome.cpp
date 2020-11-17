#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char str[100];
	cin>>str;
	int length = 0;
	for(int i = 0;str[i]!='\0';i++)
	{
		length++;
	}
	int flag = 0;
	for(int i = 0;i < length;i++)
	{
		if(str[i] == str[length-i-1])
		{
			flag = 1;
		}
	}
	if(flag == 1)
	{
		cout<<"PALINDROME."<<endl;
	}
	else
	cout<<"NOT PALINDROME."<<endl;
	getch();
}
