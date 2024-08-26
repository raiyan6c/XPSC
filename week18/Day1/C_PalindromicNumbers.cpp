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
    string s;
    cin>>s;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        a[i]=s[i]-'0';
    }
    ll ans[n];
    if(a[0]!=9)
    {
        for(ll i=0;i<n;i++)
        {
            ans[i]=9-a[i];
        }
    }
    else
    {
        ll carry=0;
        for(ll i=n-1;i>-1;i--)
        {
            if(a[i]+carry==1 || a[i]+carry==0)
            {
                ans[i]=1-a[i]-carry;
                carry=0;
            }
            else
            {
                ans[i]=11-a[i]-carry;
                carry=1;
            }
        }
    }
    for(ll i=0;i<n;i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
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