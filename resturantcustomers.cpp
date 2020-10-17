#include<iostream>
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(void)
{
	lli n,x,y;
	vector<pair<int,bool> > arr;
	cin>>n;
	while(n--)
	{
		cin>>x>>y;
		arr.push_back(make_pair(x,true));
		arr.push_back(make_pair(y,false));
	}
	sort(arr.begin(),arr.end());
	lli count=0;
	lli max_people=0;
	lli len=arr.size();
	for(int i=0;i<arr.size();i++)
	{
		int outcome = arr[i].second ? 1 : -1;
		count+=outcome;
		max_people = max(max_people, count);
	}
	cout<<max_people;
	return 0;
}
