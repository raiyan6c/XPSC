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
    ll n,k,x;
    cin>>n>>k;
    ll alu=1;
    while(n>0)
    {
        x=n-n/2;
        if(k<=x)
        {
            cout<<alu*(2*k-1)<<"\n";
            break;
        }
        k-=x;
        alu*=2;
        n/=2;
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