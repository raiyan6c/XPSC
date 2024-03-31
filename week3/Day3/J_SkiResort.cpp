#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
#define st set<int>
using namespace std;
void solve()
{
    ll n,k,q,cnt=0,ans=0;
    cin>>n>>k>>q;
    ll a[n+1];
    for(ll i=1;i<=n;i++) cin>>a[i];
    for(ll i=1;i<=n;i++)
    {
        if(a[i]<=q) cnt++;
        else
        {
            if(cnt>=k)
            {
                ll alu=(cnt-k+1);
                ans+=(alu*(alu+1))/2;
            }
            cnt=0;
        }
    if(i==n && cnt>=k)
    {
        ll alu=(cnt-k+1);
        ans+=(alu*(alu+1))/2;
        cnt=0;
    }
    }
    cout<<ans<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}