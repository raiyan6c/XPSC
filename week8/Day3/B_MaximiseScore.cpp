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
    ll n,mn=1e9;
    cin>>n;
    vi v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    vi v2;
    for(ll i=0;i<n;i++)
    {
        ll l=-1;
        ll r=-1;
        if(i-1>=0) l=abs(v[i]-v[i-1]);
        if(i+1<n) r=abs(v[i]-v[i+1]);
        v2.pb(max(l,r));
    }
    for(ll i=0;i<v2.size();i++) mn=min(mn,v2[i]);
    cout<<mn<<"\n";
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