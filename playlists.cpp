#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	unordered_map<int,int> umap;
	
	int max_len=0;
	int cnt=0;
	
	for(int i=0;i<n;i++)
	{
	    if (umap.find(arr[i])==umap.end()){
	        umap[arr[i]]=1; cnt+=1;}
	    else 
	    {
	        umap.clear();
	        if(cnt>max_len)
	            max_len=cnt;
	        cnt=1;
	        umap[arr[i]]=1;
	    }
	}
	
	if(cnt>max_len)
		max_len=cnt;
	
	cout<<max_len;
	
	return 0;
}
