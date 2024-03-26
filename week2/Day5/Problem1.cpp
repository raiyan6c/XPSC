#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s;
    cin>>n>>s;
    long long a[n];
    for(long long i=0;i<n;i++) cin>>a[i];
    long long l=0,r=0,sum=0,res=0;
    while(r<n)
    {
        sum+=a[r];
        if(sum<=s) res=max(res,(r-l+1));
        else
        {
            sum-=a[l];
            l++;
        }
        r++;
    }
    cout<<res;
}