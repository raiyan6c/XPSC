#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
#define si set<int>
#define pi priority_queue<long long>
using namespace std;
void solve()
{
    vector<pair<ll,ll>> v,vv,vvv;
    ll n,x;
    cin>>n;
    ll ai[n],aii[n],aiii[n];
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.pb({x,i});
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;
        vv.pb({x,i});
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;
        vvv.pb({x,i});
    }
    sort(v.begin(), v.end());
    sort(vv.begin(), vv.end());
    sort(vvv.begin(), vvv.end());
    ll g=3,s=0;
    for(int i=n-3;i<n;i++)
    {
        for(int j=n-3;j<n;j++)
        {
            for(int k=n-3;k<n;k++)
            {
                if(v[i].second!=vv[j].second && v[i].second!=vvv[k].second && vv[j].second!=vvv[k].second)
                s=max(s,(v[i].first+vv[j].first+vvv[k].first));
            }
        }
    }
    cout<<s<<"\n";

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