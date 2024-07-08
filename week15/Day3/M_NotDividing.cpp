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
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==1) v[i]++;
    }

    for(ll i=1;i<n;i++)
    {
        if(v[i]%v[i-1]==0)
        {
            v[i]++;
        }
        
    }
    for(ll i=0;i<n;i++) cout<<v[i]<<" ";
    cout<<endl;
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