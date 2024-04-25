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
    ll a[n],x=0,p=0,q=0,r=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>=2 && x==0)
        {
            if(a[i]<a[i-1] && a[i-2]<a[i-1])
            {
                p=i-1;
                q=i;
                r=i+1;
                x=1;
            }
        }
    }
    if(x==0) cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        cout<<p<<" "<<q<<" "<<r<<"\n";
    }
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