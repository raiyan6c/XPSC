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
    ll n,lans=0,ls=0,rs=0,rans=0;
    cin>>n;
    vi v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    if(n==1) cout<<v[0]<<"\n";
    else
    {
        // if((v[0]<0 && v[n-1]<0) || (v[0]>0 && v[n-1]>0))
        ll r=0;
        while(r<n)
        {
            ll x=v[r];
            r++;
            while(r<n && (v[r]>0)==(x>0))
            {
                x=max(v[r],x);
                r++;
            }
            ls+=x;
        }
        cout<<ls<<"\n";
    }
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