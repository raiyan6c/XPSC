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
    ll a[n],b[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++)
    {
        cin>>b[i];
        // b[i]=b[i]-a[i];
    }
    for(ll i=0;i<n;i++)
    {
        // cin>>b[i];
        b[i]=b[i]-a[i];
    }
    sort(b,b+n);
    ll l=0,r=n-1,ans=0;
    while(l<r)
    {
        if(b[l]+b[r]>=0)
        {
            ans++;
            l++;
            r--;
        }
        else l++;
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