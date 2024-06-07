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
    ll n,ans=0;
    string s;
    cin>>n>>s;
    for(ll i=1;i<=n;i++)
    {
        if (s[i-1]!='1')
        {
            ll j=i;
            while(j<=n && s[j-1]!='1')
            {
                if(s[j-1]=='0')
                {
                    s[j-1]='e';
                    ans+=i;
                }
                j+=i;
            }
        }
    }
    cout<<ans<<"\n";
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