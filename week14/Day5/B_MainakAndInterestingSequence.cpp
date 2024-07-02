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
    ll n, m;
    cin>>n>>m;
    if((((n%2)==0) && ((m%2)==1)) || (m<n))
    {
        cout<<"NO\n";
    }
    else if((n%2)==1)
    {
        cout<<"YES\n";
        for (ll i=1;i<n;i++)
        {
            cout<<"1 ";
        }
        cout<<(m-n)+1<<"\n";
    }
    else
    {
        cout<<"YES\n";
        for(ll i=2;i<n;i++)
        {
            cout<<"1 ";
        }
        ll x=(m-n+2);
        cout<<x/2<<" "<<x/2<<"\n";
    }
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