#include<iostream>
#include<algorithm>
#define lli long long int

using namespace std; 

int main(void)
{
    lli n;
    cin>>n;
    lli sum=0;
    while(n>0)
    {
        n=n/5;
        sum+=n;
    }
    cout<<sum;
    return 0;
}