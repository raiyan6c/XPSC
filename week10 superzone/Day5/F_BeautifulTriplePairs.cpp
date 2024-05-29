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
    ll n,ans=0;
    cin>>n;
    vi v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    // for(ll i=0;i<n-2;i++)
    // {
    //     if(v[i]==v[i+3] && v[i+1]==v[i+1+3] && v[i+2]!=v[i+2+3]) cnt++;
    //     if(v[i]==v[i+3] && v[i+1]!=v[i+1+3] && v[i+2]==v[i+2+3]) cnt++;
    //     if(v[i]!=v[i+3] && v[i+1]==v[i+1+3] && v[i+2]==v[i+2+3]) cnt++;
    // }
    map<pair<ll,ll>,ll>mp1,mp2,mp3;
    map<vi,ll>cnt; 
    for(int i=0;i<n-2;i++)
    {
        ans+=mp1[{v[i],v[i+1]}]++;
        ans+=mp2[{v[i],v[i+2]}]++;
        ans+=mp3[{v[i+1],v[i+2]}]++;
        vi d={v[i],v[i+1],v[i+2]};
        ans-=cnt[d]*3;
        cnt[d]++;
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