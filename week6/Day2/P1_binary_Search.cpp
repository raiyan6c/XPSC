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
    ll n,k,x;
    cin>>n>>k;
    vi v(n),vv(k);
    for(ll i=0;i<n;i++) cin>>v[i];
    
    for(ll i=0;i<k;i++)
    {
        cin>>x;
        ll r=n-1,l=0;
        while(r-l>1)
        {
            ll mid=(r+l)/2;
            if(v[mid]<x) l=mid+1;
            else r=mid;
        }
        if(v[l]==x || v[r]==x)  cout<<"YES\n";
        else cout<<"NO\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    // cin>>t;
    // while(t--)
    // {
        solve();
    // }
}