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
    ll n,l=0,x=0,r=0,p=0,m=0;
    cin>>n;
    ll a[n];
    vi v;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        l+=a[i];
        if(l<0) l=0;
    }
    cout<<l<<"\n";

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