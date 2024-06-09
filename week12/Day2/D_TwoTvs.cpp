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
	map<ll,ll>mp;
	while(n--)
    {
		ll l,r;
		cin>>l>>r;
		mp[l]+=1;
		mp[r+1]-=1;
	}
	ll mx=LONG_MIN,ans=0;
	for(auto &x:mp)
    {
		ans+=x.second;
		mx=max(mx,ans);
	}
	if(mx>2) cout<<"NO\n";
    else cout<<"YES\n";
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