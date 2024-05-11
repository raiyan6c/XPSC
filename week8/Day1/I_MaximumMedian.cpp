#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<long long>
#define si set<long long>
#define pi priority_queue<long long>
#define stc stack<ll>
using namespace std;
ll n,k;
vi v;

bool hu(ll x)
{
    ll nd=0;
    for(ll i=n/2;i<n;i++)
    {
        if(x>v[i]) nd+=(x-v[i]);
        if(nd>k) return false;
    }
    return nd<=k;
}
void solve()
{
    
    ll z;
    cin>>n>>k;
    // vi v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>z;
        v.pb(z);
    }
    sort(v.begin(),v.end());
    ll l=0,r=1e18,ans=0,m=0;
    while(l<=r)
    {
        m=(l+r)/2;
        if(hu(m))
        {
            l=m+1;
            ans=m;
        }
        else r=m-1;
    }
    cout<<ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}