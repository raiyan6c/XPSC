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
    ll n,x=1e9;
    cin>>n;
    int m=(n*(n-1))/2;
    vi v(m);
    for(ll i=0;i<m;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<m;i+=(--n)) cout<<v[i]<<" ";
    cout<<x<<"\n";
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