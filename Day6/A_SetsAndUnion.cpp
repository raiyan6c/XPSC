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
    vector<multiset<ll>>a(n);
    si p;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        for(ll j=0;j<x;j++)
        {
            ll y;
            cin>>y;
            a[i].insert(y);
            p.insert(y);
        }
    }
    ll ans=0;
    for(auto x:p)
    {
        si s;
        for(int i=0;i<n;i++){
            if(a[i].find(x)==a[i].end())
            {
                for(auto z:a[i])
                {
                    s.insert(z);
                }
            }
        }
        ans=max(ans,(ll)s.size());
    }
    cout<<ans<<endl;
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