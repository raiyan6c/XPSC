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
    ll x,y,tt;
    cin>>tt;
    vector<pair<ll,bool>>a;
    while(tt--)
    {
        cin>>x>>y;
        a.pb({x,true});
        a.pb({y,false});
    }
    sort(a.begin(),a.end());
    ll ans=0,res=0;
    for(ll i=0;i<a.size();i++)
    {
        if(a[i].second==true)
        {
            ans++;
            res=max(res,ans);
        }
        else ans--;
    }
    cout<<res<<"\n";


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