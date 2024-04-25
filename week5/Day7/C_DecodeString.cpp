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
    string s,ans="";
    cin>>s;
    for(ll i=n-1;i>-1;i--)
    {
        if(s[i]!='0') ans+=s[i]-'0'-1+'a';
        else 
        {
            string al="";
            al+=s[i-2];
            al+=s[i-1];
            int x=stoi(al);
            i=i-2;
            ans+=('a'+x-1);

        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<"\n";
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