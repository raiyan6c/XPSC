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
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    if(p<q) swap(a,b),swap(p,q);
    ll x=(n/a)*p,y=n/b;
    y-=(n/lcm(a,b));
    y*=q;
    cout<<x+y;
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