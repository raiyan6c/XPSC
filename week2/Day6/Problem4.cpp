#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s;
    cin>>n>>s;
    long long a[n];
    for(long long i=0;i<n;i++) cin>>a[i];
    long long l=0,r=0,sum=a[0],res=0;
    while(r<n)
    {
        if(sum>=s)
        {
            res+=n-r;
            sum-=a[l];
            l++;
        }
        else
        {
            r++;
            sum+=a[r];
        }
    }
    cout<<res;
}