#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int visited[100000];
vector<int>res;
int cycle_flag=0;

void dfs(int curr,list<int> mat[])
{
	visited[curr]=1;
	list<int>::iterator it;
	for(it=mat[curr].begin();it!=mat[curr].end();it++)
	{
		int pos=*it;
		if(visited[pos]==0)
			dfs(pos,mat);
		else if(visited[pos]==1)
		{
			cycle_flag=1;
			return ;
		}
	}
	visited[curr]=2;
	res.push_back(curr);
}

int main(void)
{
	int n,m;
	cin>>n>>m;
	list<int> mat[n+1];
	int u,v;
	while(m--)
	{
		cin>>u>>v;
		mat[v].push_back(u);
	}
	
	for(int i=1;i<=n;i++)
	{
		if(visited[i]==0)
		{
			dfs(i,mat);
		}	
		if(cycle_flag==1)
			break;			
	}
	if(cycle_flag==1)
		cout<<"IMPOSSIBLE";
	else
	{
		for(int i=0;i<n;i++)
			cout<<res[i]<<" ";
	}
	
	return 0;
}
