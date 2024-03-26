#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s,l=0,r=0,sum=0,res=0;
    cin>>n>>s;
    long long a[n];
    for(long long i=0;i<n;i++) cin>>a[i];
    while(r<n)
    {
        sum+=a[r];
        if(sum<=s)
        {
            res+=(r-l+1);
        }
        else
        {
            while(sum>s)
            {
                sum-=a[l];
                l++;
            }
            if(sum<=s)
            {
                res+=(r-l+1);
            }
        }
        r++;
    }
    cout<<res;
}