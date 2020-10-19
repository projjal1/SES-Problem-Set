#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int visited[100000];

void dfs(int curr,list<int> mat[])
{
	visited[curr]=1;
	list<int>::iterator it;
	for(it=mat[curr].begin();it!=mat[curr].end();it++)
	{
		int pos=*it;
		if(visited[pos]==0)
		{
			dfs(pos,mat);
		}
	}
}

int main(void)
{
	int n,m;
	cin>>n>>m;
	//for using the stack 
	list<int> mat[n+1];
	for(int i=1;i<=n;i++)	
		visited[i]=0;
	//input the matrix
	int u,v;
	for(int i=0;i<m;i++)
	{
		cin>>u>>v;
		mat[u].push_back(v);
		mat[v].push_back(u);
	}
	//Connected components 
	int count=0;
	vector<int> res;
	for(int i=1;i<=n;i++)
	{
		if(visited[i]==0)
		{
			dfs(i,mat);
			count++;
			res.push_back(i);
		}			
	}
	cout<<count-1<<endl;
	for(int i=0;i<count-1;i++)
		cout<<res[i]<<" "<<res[i+1]<<endl;
	
}
