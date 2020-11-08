#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int decimal;
	int binary = 0,temp = 1,rem = 0;
	cout<<"Enter the Decimal Number:";
	cin>>decimal;
	while(decimal!=0)
	{
		rem = decimal%2;
		binary = binary + rem*temp;
		temp = temp*10;
		decimal = decimal/2;
	}
	cout<<"Binary Number:"<<binary<<endl;
	getch();
}
