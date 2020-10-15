#include<iostream>
#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int main(void)
{
    lli n;
    cin>>n;
    lli arr[200000];
    lli i;
    lli cnt=0;
    lli no_present=-1LL;
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        if (no_present!=arr[i])
        {
            cnt+=1;
            no_present=arr[i];
        }
        else
        {
            continue;
        }   
    }
    cout<<cnt;
}