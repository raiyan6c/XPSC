#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
#define si set<int>
#define pi priority_queue<long long>
using namespace std;
void solve()
{
    ll n;
	cin>>n;
	string s;
	cin>>s;
	long long ss=0;
	vector<long long> v;
	for (ll i=0;i<n;i++)
    {
		if (s[i]=='L')
        {
			v.push_back((n-1-i)-i);
			ss+=i;
		}
		else
        {
			v.push_back(i-(n-1-i));
			ss+=n-1-i;
		}
	}
	sort(v.begin(),v.end(),greater<ll>());
	for(ll i=0;i<n;i++)
    {
		if (v[i] > 0)
        {
            ss+= v[i];
        }
		cout<<ss<<" ";
	}
	cout<<"\n";
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