#include<iostream>
#include<conio.h>
using namespace std;
int max(int b[], int x)
{
	int large = b[0];
	for(int i=1;i<x;i++)
	{
		if(b[i] > large)
		{
			large = b[i];
		}
	}
	cout<<"LARGE:"<<large<<endl;
}
int main()
{
	int n;
	cout<<"Enter the no. of Elements:";
	cin>>n;
	int a[n];
	cout<<"The Elements are"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max(a,n);
}
