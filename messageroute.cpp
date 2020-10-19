#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

int main(void)
{
	int n,m,u,v;
	cin>>n>>m;
	list<int> arr[n+1];
	for(int i=0;i<m;i++)
	{
		cin>>u>>v;
		arr[u].push_back(v);
		arr[v].push_back(u);
	}
	
	int vis[n+1];
	int from[n+1];
	for(int i=1;i<=n;i++)
	{
		vis[i]=0;
		from[i]=0;
	}	
	
	queue<int> q;
	q.push(1);
	while(!q.empty())
	{
		int p=q.front();
		q.pop();
		vis[p]=1;
		if (p==n)
			break;
		list<int>::iterator it;
		for(it=arr[p].begin();it!=arr[p].end();it++)
		{
			int aa=*it;
			if(vis[aa]==0)
			{
				from[aa]=p;
				vis[aa]=1;
				q.push(aa);
			}
		}
	}
	vector<int> res;
	if(vis[n]==0)
		cout<<"IMPOSSIBLE";
	else
	{
		res.push_back(n);
		int a=n;
		while(a!=1)
		{
			a=from[a];
			res.push_back(a);
		}
		cout<<res.size()<<endl;
		for(int i=res.size()-1;i>=0;i--)
			cout<<res[i]<<" ";
	}
	return 0;
}
