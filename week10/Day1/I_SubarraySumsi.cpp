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
    ll n,x,z;
    cin>>n>>x;
    map<ll,ll>mp;
    ll s=0,cnt=0;
    mp[s]=1;
    for(ll i=0;i<n;i++)
    {
        cin>>z;
        s+=z;
        if(mp[s-x]) cnt++;
        mp[s]=1;
    }
    cout<<cnt;
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