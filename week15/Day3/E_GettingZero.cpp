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
    ll n,x,c,nx,ans;
	cin >> n;
	for(ll i=0;i<n;i++)
    {
		cin>>x;
		if(x==0)
        {
			cout<<0<<" ";
			continue;
		}
		nx=x;
		x+=x%2;
		ans=15;
		for(ll i=nx%2;i<ans;i+=2,x+=2)
        {
			nx=x;
			c=0;
			while(nx%2==0)
            {
				nx>>=1;
				c++;
			}
			ans=min(ans,15-c+i);
		}
		cout<<ans<<" ";
	}
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