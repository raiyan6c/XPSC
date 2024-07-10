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
    ll x,n,m;
    cin>>x>>n>>m;
    ll a=(m*10);
    for(ll i=1;i<=n;i++)
    {
        if(x<=a)
        {
            break;
        }
        x=(x/2)+10;
    }
    if(x<=a) cout<<"YES\n";
    else cout<<"NO\n";
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