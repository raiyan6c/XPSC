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
    for(auto &x:a) cin>>x;
    for(auto &x:b) cin>>x;
    ll x=0,y=0,neg=0,pos=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]>b[i]) x+=a[i];
        else if(a[i]<b[i]) y+=b[i];
        else
        {
        neg += (a[i] < 0);
        pos += (a[i] > 0);
        }
    }
    ll ans=-1e9;
    for(ll i=-neg;i<=pos;i++) ans=max(ans,min(x+i,y+(pos-neg-i)));
    cout<<ans<<"\n";
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