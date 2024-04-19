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
    ll a[n],ans=0,tem=INT_MAX;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        ans=ans^a[i];
        // tem=min(tem,ans);
    }
    // ll x;
    // cin>>x;
    // ans=ans^x;
    // cout<<ans<<endl;
    
    for(ll i=0;i<n;i++)
    {
        tem=min(a[i]^ans,min(ans,tem));
    }
    cout<<tem<<endl;
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