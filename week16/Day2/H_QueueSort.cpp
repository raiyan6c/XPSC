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
    vi a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll x=0;
    for(ll i=1;i<n;i++)
    {
        if(a[i]<a[x]) x=i;
    }
    for(ll i=x+1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            cout<<-1<<endl;
            return;
        }
    }
    cout<<x<<endl;
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