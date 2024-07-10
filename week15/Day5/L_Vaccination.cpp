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
    ll n,k,d,w;
    cin>>n>>k>>d>>w;
    vi a(n);
    ll ans=0,rem=0,ex=-1;    
    for(auto &x:a) cin>>x;
    for(ll i=0;i<n;i++)
    {
        if(rem==0 || ex<a[i])
        {
            ans++;
            rem=k-1;
            ex=a[i]+d+w;
        }
        else rem--;
    }	
    cout<<ans<<"\n";
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