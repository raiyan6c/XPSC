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
    ll x=1,y=0,cnt=0;
    while(x*2<=n)
    {
        x*=2;
        cnt++;
    }
    for(ll i=cnt-1;i>=0;i--)
    {
        if((1<<i)&n)
        {
            y|=(1<<i);
        }
    }
    cout<<y<<" "<<x<<"\n";
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
// 110 6
// 100 4
// 010 2
// 110 6