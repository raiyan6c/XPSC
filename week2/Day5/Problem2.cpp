#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s;
    cin>>n>>s;
    long long a[n];
    for(long long i=0;i<n;i++) cin>>a[i];
    long long l=0,r=0,sum=0,res=INT_MAX;
    // cout<<res<<endl;
    while(r<n)
    {
        sum+=a[r];
        if(sum>=s)
        {
            while(sum>=s)
            {
                res=min(res,r-l+1);
                sum-=a[l];
                l++;
            }
        }
        r++;
    }
    if(res==INT_MAX) cout<<-1;
    else cout<<res;
}