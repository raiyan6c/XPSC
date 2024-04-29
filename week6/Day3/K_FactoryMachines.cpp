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
	cin>>n>>k;
	vi v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	ll l=0,r=1e18,ans=0;
	while (l<=r)
    {
		ll mid=(l+r)/2;
		ll d=0;
		for(ll i=0;i<n;i++)
        {
			d+=(mid/v[i]);
			if(d>=k)break;
		}
		if(d>=k)
        {
			ans=mid;
			r=mid-1;
		}
        else l=mid+1;
	}
	cout<<ans<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin>>t;
    // while(t--)
    // {
        solve();
    // }
}