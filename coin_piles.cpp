#include<iostream>
#define lli long long int
using namespace std;

int main(void)
{
	int t;
	cin>>t;
	lli a,b;
	while(t--)
	{
		cin>>a>>b;
		cout<<(((a+b)%3==0 && min(a,b)*2>=max(a,b))?"YES":"NO")<<endl;
	}
}
