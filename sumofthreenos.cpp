#include<iostream>
#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int binary(int low,int up,vector<pair<int,int> > arr,lli tr,int pos)
{
    while(low<up)
    { 
        lli sum=arr[low].first+arr[up].first;
        if (sum==tr)
        {
            int res[3];
            res[0]=arr[low].second;
            res[1]=arr[pos].second;
            res[2]=arr[up].second;
            sort(res,res+3);
            cout<<res[0]<<" "<<res[1]<<" "<<res[2];
            return 1;
        }
        else if (sum>tr)
        {
            up--;
        }
        else
        {
            low++;
        }
    }
    return 0;
}

int main(void)
{
    int n;
    lli tar;
    cin>>n>>tar;
    vector<pair<int,int> > arr(n);
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i].first;
        arr[i].second=i+1;
    }
    sort(arr.begin(),arr.end());
    int flag=0;
    for(i=0;i<n-2;i++)
    {
        lli rem=tar-arr[i].first;
        int get=binary(i+1,n-1,arr,rem,i);
        if (get==1)
        {
            flag=1;
            break;
        }            
    }
    if(flag==0)
        cout<<"IMPOSSIBLE";
}