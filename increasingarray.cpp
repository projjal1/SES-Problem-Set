#include<iostream>
#include<algorithm>
#define lli long long int 

using namespace std;

int main(void)
{
    lli n;
    cin>>n;
    lli arr[200000];
    lli m=0;
    lli total=0;
    for(lli i=0;i<n;i++)
        cin>>arr[i];
    for(lli i=0;i<n;i++)
    {
        total+=max(0LL,m-arr[i]);
        m=max(m,arr[i]);
    }
    cout<<total;
}