#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    string st;
    cin>>st;
    long long int len=st.size();
    char ch=' ';
    long long int count=0;
    long long int max=0;
    for(long long int i=0;i<len;i++)
    {
        if (ch==st[i])
        {
            count+=1;
        }
        else
        {
            ch=st[i];
            if (max<count)
                max=count;
            count=1;
        }
    }
    if (max<count)
        max=count;
    cout<<max;
    return 0;
}