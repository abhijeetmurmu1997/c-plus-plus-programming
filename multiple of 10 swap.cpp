#include<iostream>
#include<conio.h>
using namespace std;
int SWAP2BEST(int brr[], int x)
{
	for(int i=0;i<x;i++)
	{
		int temp = 0;
		if(brr[i]%10==0)
		{
			temp = brr[i];
			brr[i] = brr[i+1];
			brr[i+1] = temp;
			i++;
		}
	}
	cout<<"AFTER CHANGES"<<endl;
	for(int i=0;i<x;i++)
	{
		cout<<brr[i]<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter the size of the array:";
	cin>>n;
	int arr[n];
	cout<<"The Elements are:"<<endl;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	cout<<"BEFORE CHANGES"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	SWAP2BEST(arr,n);
	getch();
}

