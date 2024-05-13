#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<long long>
#define si set<long long>
#define pi priority_queue<long long>
#define stc stack<ll>
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vi a(n),b(n);
    bool hu=false;
    si s;
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    ll m=0,ax=0,z=-1;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)
    {
        if(a[i]<b[i]) ax=1;
        else
        {
            if(b[i]==0) m=max(m,a[i]);
            else
            {
                ll df=a[i]-b[i];
                mp[df]++;
            }
        }
    }
    for(auto &x:mp) z=x.first;
    if(mp.size()>1) ax=1;
    if(z!=-1 && m>z) ax=1;
    if(ax==1) cout<<"NO\n";
    else cout<<"YES\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}