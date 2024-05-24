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
    ll n,x,ier=0,jer=0,ker=0;
    cin>>n>>x;
    vector<pair<ll,ll>>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i].first;
        v[i].second=i+1;
    }
    if(n<3)
    {
        cout<<"IMPOSSIBLE";
        return;
    }
    else
    {
        sort(v.begin(),v.end());
        for(ll i=0;i<n;i++)
        {
            ll z=x-v[i].first;
            for(ll j=i+1,k=n-1;j<k;j++)
            {
                while(v[j].first+v[k].first>z) k--;
                if(j<k && v[j].first+v[k].first==z)
                {
                    cout<<v[i].second<<" "<<v[j].second<<" "<<v[k].second;
                    return;
                }
            }
        }
    }
    cout<<"IMPOSSIBLE";
    // cout<<ier<<" "<<jer<<" "<<ker;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}