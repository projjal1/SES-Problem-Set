#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    long long int n;
    cin>>n;
    long long int s=0;
    long long int no;
    for(int i=0;i<n-1;i++)
    {
        cin>>no;
        s+=no;
    }
    long long int total=n*(n+1)/2;
    long long int target=total-s;
    cout<<target;
    return 0;
}