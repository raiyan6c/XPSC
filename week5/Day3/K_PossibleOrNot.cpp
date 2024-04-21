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
    ll x;
    cin>>x;
    int d=-1;
    ll i=0;
    while(i<n)
    {
        int ax;
        cin>>ax;
        if((ax&x)==x) d&=ax;
        i++;
    }
    if(d==x) cout<<"YES\n";
    else cout << "NO\n";
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