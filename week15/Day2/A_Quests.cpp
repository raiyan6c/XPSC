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
    ll n,c,d;
    cin>>n>>c>>d;
    ll x=(2*1e5)+10;
    ll v[x];
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v,v+n,greater<ll>());
    ll l=0;
    ll r=d+1;
    while(l<r)
    {
        ll mid=l+(r-l+1)/2;
        ll total=0;
        for(ll i=0;i<d;i++)
        {
            if(i%mid<n)total+=v[i%mid];
        }
        if(total>=c)
        {
            l=mid;
        }
        else
        {
            r=mid-1;
        }
    }

    if(l==0) cout<<"Impossible\n";
    else if(l==d+1) cout<<"Infinity\n";
    else cout<<(l-1)<<"\n";   
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