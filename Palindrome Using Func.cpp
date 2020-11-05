#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int palindromeORNot(int n)
{
	int rem = 0,sum = 0;
	while(n!=0)
	{
		rem = n%10;
		sum = sum*10+rem;
		n = n/10;
	}
	return sum;
}
int main()
{
	system("cls");
	int num;
	cout<<"Enter the number:";
	cin>>num;
	palindromeORNot(num);
	if(num == palindromeORNot(num))
	{
		cout<<"Palindrome."<<endl;
	}
	else
	cout<<"Not Palindrome."<<endl;
	getch();
}
