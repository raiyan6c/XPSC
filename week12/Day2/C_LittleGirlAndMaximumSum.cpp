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
	ll n,q,ans=0;
    cin>>n>>q;
	vi v(n),v1(n+1);
	for(ll i=0;i<n;i++) cin>>v[i];
	while(q--)
	{
		ll l,r;
        cin>>l>>r;
		l--,r--;
		v1[l]++;
		if(r+1<n) v1[r+1]--;
	}
	for(ll i=1;i<n;i++)
	{
		v1[i]+=v1[i-1];
	}
	v1.resize(n);
	sort(v.rbegin(),v.rend());
	sort(v1.rbegin(),v1.rend());
	for(int i=0;i<n;i++)
	{
		ans+=(1LL*v[i]*v1[i]);
	}
	cout<<ans<<'\n';
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