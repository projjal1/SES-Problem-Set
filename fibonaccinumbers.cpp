#include<iostream>
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

//Complexity is O(log n* log(log n ))

lli mod=1e9+7;
map<lli,lli> mat;

lli f(lli n)
{
	//Reached goal
	if (mat.count(n))
		return mat[n];
	lli k=n/2;
	//for n=2*k
	if(n%2==0)
		return mat[n]=(f(k)*f(k) + f(k-1)*f(k-1)) % mod;
	//for n=2*k+1
	else 
		return mat[n]=(f(k)*f(k+1) + f(k-1)*f(k)) % mod;
}

int main(void)
{
	lli n;
	cin>>n;
	mat[0]=1;
	mat[1]=1;
	cout<<(n==0?0:f(n-1));	
	return 0;
}
