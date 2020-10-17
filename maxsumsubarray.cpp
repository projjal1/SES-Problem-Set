
#include<iostream>
#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int main(void)
{
    lli n;
    cin>>n;
    lli max=0;
    lli arr[n];
    lli i;
    for(i=0;i<n;i++)
        cin>>arr[i];
    lli max_inst=0;
    for(i=0;i<n;i++)
    {
        max_inst+=arr[i];
        if(max<max_inst)
            max=max_inst;
        if(max_inst<0)
            max_inst=0;
    }
    if(max==0)
    {
        cout<<*max_element(arr,arr+n);
    }
    else
        cout<<max;
}