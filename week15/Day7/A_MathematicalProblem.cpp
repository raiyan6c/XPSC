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
    if(n<3) cout<<10*(s[0]-'0')+(s[1]-'0')<<"\n";
    else if(s[0]=='0' || s[n-1]=='0') cout<<0<<"\n";
    else
    {
        ll sum=LONG_MAX,x=0;
        for(ll i=0;i<n-1;i++)
        {
            x=10*(s[i]-'0')+(s[i+1]-'0');
            for(int j=0;j<n;j++)
            {
                if(j!=i && j!=i+1 && s[j]!='1')
                {
                    x=(min(x+(s[j]-'0'),x*(s[j]-'0')));
                }
            }
            sum=min(sum,x);
        }
        cout<<sum<<"\n";
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