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
    vi v(1001,0);
    for(ll i=1;i<=n;i++)
    {
        ll z;
        cin>>z;
        v[z]=i;
    }
    // for(auto &x:v) cout<<x<<" ";
    ll mx=-1;
    for(ll i=1;i<=1000;i++)
    {
        for(ll j=1;j<=1000;j++)
        {
            if(v[i] && v[j] && (__gcd(i,j)==1))
            {
                mx=max(mx,v[i]+v[j]);
                // cout<<i<<" "<<j<<endl;
            }
        }
    }
    cout<<mx<<"\n";
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