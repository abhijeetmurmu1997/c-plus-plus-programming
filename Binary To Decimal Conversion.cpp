#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int binary;
	int decimal = 0,rem = 0,temp = 1;
	cout<<"Enter the Binary Number:";
	cin>>binary;
	while(binary!=0)
	{
		rem = binary%10;
		decimal = decimal+rem*temp;
		temp = temp*2;
		binary = binary/10;
	}
	cout<<"The Decimal Number is:"<<decimal<<endl;
	getch();
}
