#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
#define st set<int>
using namespace std;
void solve()
{
    ll n,q;
    cin>>n>>q;
    ll a[n+1];
    ll pf[n+1];
    ll sum=0;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
        pf[i]=pf[i-1]+a[i];
        sum+=a[i];
    }
    ll s=sum;
    while(q--)
    {
        ll l,r,k;
        cin>>l>>r>>k;
        ll res=s-(pf[r]-pf[l-1]);
        ll ans=((r-l+1)*k)+res;
        if(ans%2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while (t--)
    {
        solve();
    }
}