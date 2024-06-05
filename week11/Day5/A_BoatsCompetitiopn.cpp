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
    vi v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    ll ans=0;
    for(ll i=1;i<=100;i++)
    {
        ll cnt=0,x=0,y=n-1;
        while(x<y)
        {
            if(v[x]+v[y]>i) y--;
            else if(v[x]+v[y]<i) x++;
            else
            {
                cnt++;
                x++;
                y--;
            }
        }
        ans=max(ans,cnt);
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