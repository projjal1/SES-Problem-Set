#include<iostream>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<1;
	}
	else if(n<4)
	{
		cout<<"NO SOLUTION";
	}
	else if(n==4)
	{
		cout<<"2 4 1 3";
	}
	else
	{
		//ODDS
		for(int i=1;i<=n;i+=2)
			cout<<i<<" ";
		//EVEN
		for(int i=2;i<=n;i+=2)
			cout<<i<<" ";
	}
}
