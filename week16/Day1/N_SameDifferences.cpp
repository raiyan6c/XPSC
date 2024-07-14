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
    ll n,k;
    cin>>n;
    ll a[n];
    map<ll,ll>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]-i]++;
    }
    ll sum=0;
    for(auto &x:mp)
    {
        sum+=(x.second*(x.second-1)/2);
    }
    cout<<sum<<"\n";
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