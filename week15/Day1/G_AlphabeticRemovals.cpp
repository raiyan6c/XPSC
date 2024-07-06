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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<vector<ll>>pos(26);
    for(ll i=0;i<n;i++)
    {
        pos[s[i]-'a'].pb(i);
    }
    vector<bool>rem(n,false);
    ll rcnt=0;
    for(char c='a';c<='z' && rcnt<k;c++)
    {
        for(ll p:pos[c-'a'])
        {
            if(rcnt>=k)break;
            if(!rem[p])
            {
                rem[p]=true;
                rcnt++;
            }
        }
    }
    string res;
    for (ll i=0;i<n;i++)
    {
        if(!rem[i])
        {
            res+=s[i];
        }
    }
    cout<<res<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}