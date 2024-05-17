#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<long long>
#define si set<long long>
#define pi priority_queue<long long>
#define stc stack<ll>
using namespace std;
bool alu(ll n)
{
    if(n==1) return false;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
void solve()
{
    ll n,x;
    cin>>n;
    x=sqrt(n);
    if(pow(x,2)==n)
    {
        if(alu(x)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else cout<<"NO\n";
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