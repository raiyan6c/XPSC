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
    ll n,ans=0;
    cin>>n;
    vi v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1])
        {
            ans+=abs(v[i]-v[i+1]);
            v[i+1]=v[i];
        }
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