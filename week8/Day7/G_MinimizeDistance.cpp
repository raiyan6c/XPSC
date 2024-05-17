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
    vi vn,vp;
    ll mn=LONG_MAX,mx=0,s=0;
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        if(x<0) vn.pb(abs(x));
        else vp.pb(x);
        mx=max(mx,abs(x));
    }
    sort(vn.begin(),vn.end(),greater<int>());
    sort(vp.begin(),vp.end(),greater<int>());
    // for(auto &z:vn) cout<<z<<" ";
    if(!vn.empty())
    {
        for(ll i=0;i<vn.size();i+=k)
        {
            // cout<<vn[i]<<" ";
            s+=2*vn[i];
        }
    }
    if(!vp.empty())
    {
        for(ll i=0;i<vp.size();i+=k)
        {
            // cout<<vp[i]<<" ";
            s+=2*vp[i];
        }
    }
    cout<<s-mx<<"\n";
    
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