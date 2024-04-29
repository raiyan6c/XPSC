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
    ll n,x;
    cin>>n>>x;
    vi v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll l=0,r=2e9,ans=0;
    // while(l<=r)
    // {
        // ll mid=l+(r-l)/2;
        // ll d=0;
        // for(ll i=0;i<v.size();i++)
        // https://codeforces.com/problemset/problem/1873/E
        // have to try myself
    // }
    // while(l<=r)
    // {
    //     ll mid=l+(r-l)/2;
    //     ll d=0;
    //     for(ll i=0;i<v.size();i++)
    //     {
    //         if(mid-v[i]<=0) d+=0;
    //         else d+=mid-v[i];
    //     }
    //     if(d<=x)
    //     {
    //         ans=mid;
    //         l=mid+1;
    //     }
    //     else r=mid-1;
    // }
    // cout<<ans<<"\n";


    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        ll d=0;
        for (ll i=0;i<v.size();i++)
        {
            if(mid-v[i]<=0) d+=0;
            else d+=mid-v[i];
        }
        if(d<=x)
        {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
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