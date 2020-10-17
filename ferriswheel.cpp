#include<iostream>
#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int main(void)
{
    lli n,x;
    cin>>n>>x;
    lli itr_sum,gondolas,i;
    lli arr[n];
    for(i=0LL;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    gondolas=0LL;
    itr_sum=0LL;
    for(i=0;i<n;i++)
    {
        if(itr_sum+arr[i]>x)
        {
            gondolas+=1;
            itr_sum=arr[i];
        }
        else
        {
            itr_sum+=arr[i];
        }
    }
    if (itr_sum>x)
        gondolas+=2;
    if (itr_sum<=x)
        gondolas+=1;
    cout<<gondolas;
}