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
    ll n,x;
    cin>>n;
    map<ll,ll>mp;
    for(ll i=1;i<=n;i++)
    {
    	cin>>x;
    	mp[x]++;
    }
    ll sn=0,db=0;
    for(auto &[i,j]:mp)
    {
    	sn+=j==1;
    	db+=j>1;
    }
    cout<<db+(sn+1)/2<<"\n";
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