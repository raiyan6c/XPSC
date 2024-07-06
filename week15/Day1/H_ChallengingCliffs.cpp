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
	vector<ll>a(n);
	for(ll i=0;i<n;i++)
    {
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	if(n==2)
    {
		cout<<a[0]<<" "<<a[1]<<"\n";
		return;
	}
	ll idx=0,min=1e9;
	for(ll i=1;i<n;i++)
    {
		if(min>abs(a[i]-a[i-1]))
        {
			idx=i;
			min=abs(a[i]-a[i-1]);
		}
	}
	for(ll i=idx;i<n;i++)
    {
		cout<<a[i]<<" ";
	}
	for(ll i=0;i<idx;i++)
    {
		cout<<a[i]<<" ";
	}
	cout<<"\n";
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