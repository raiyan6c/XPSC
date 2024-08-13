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
    ll n,k;
    cin>>n>>k;
    ll l=-1,r=n+1;
    while(r-l>1)
    {
        ll m=(l+r)/2;
        if((n-m)*(n-m+1)/2-m>k) l=m;
        else r=m;
    }
    cout<<r;
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