#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int l,u;
	cout<<"Enter the Lower limit:";
	cin>>l;
	cout<<"Enter the Upper Limit:";
	cin>>u;
	if(l>u)
	{
		cout<<"NOT POSSIBLE."<<endl;
	}
	else
	{
		for(int i = l;i <= u;i++)
	    {
		    int temp = i,sum = 0;
		    for(int j = 1;j < temp;j++)
		    {
			    if(temp%j == 0)
			    {
				    sum = sum+j;
			    }
		    }
		    if(sum == i)
		    {
			    cout<<i<<endl;
		    }
	    }
	}
	getch();
}
