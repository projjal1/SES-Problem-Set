#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(void)
{
    lli n,m,k;
    cin>>n>>m>>k;
    lli b[m];
    lli applicant[n];
    lli i,j;
    for(i=0;i<n;i++)
        cin>>applicant[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    lli cnt=0;
    sort(b,b+m);
    sort(applicant,applicant+n);
    i=0,j=0;
    while(i<n && j<m)
    {
        lli diff=applicant[i]-b[j];
        if (diff>=-k && diff<=k)
        {
            i++;
            j++;
            cnt++;
        }
        else if (applicant[i]<b[j])
        {
            i++;
        }
        else 
        {
            j++;
        }
    }
    cout<<cnt;
}