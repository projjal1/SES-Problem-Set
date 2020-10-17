#include<iostream>
#include<bits/stdc++.h>
#define lli long long int

using namespace std; 

int main(void)
{
	int n;
	cin>>n;
	lli x,y;
	vector<pair<lli,lli> > arr;
	while(n--)
	{
		cin>>x>>y;
		arr.push_back(make_pair(x,y));
	}
	sort(arr.begin(),arr.end());
	lli cur=0;
	lli count=0;
	for(auto ele : arr)
	{
		if(ele.second>=cur)
		{
			cur=ele.first;
			count++;
		}
	}
	cout<<count;
	return 0;
}
