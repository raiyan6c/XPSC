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
    ll n,z;
    cin>>n;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)
    {
        cin>>z;
        mp[z%10]++;
    }
    bool flag=false;
    vi v;
    for(auto &x:mp)
    {
        v.pb(x.first);
        if(x.second>1)
        {
            v.pb(x.first);
            if(x.second>2)
            {
                v.pb(x.first);
            }
        }
    }
    for(ll i=0;i<v.size();i++)
    {
        for(ll j=i+1;j<v.size();j++)
        {
            for(ll k=j+1;k<v.size();k++)
            {
                if((v[i]+v[j]+v[k])%10==3)
                {
                    flag=true;
                    break;
                }
            }
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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