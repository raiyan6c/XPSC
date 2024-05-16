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
    string s;
    cin>>s;
    ll z=0,o=0;
    for(ll i=0;s[i];i++)
    {
        if(s[i]=='0') z++;
        else o++;
    }
    
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='1' && z!=0) z--;
        else if(s[i]=='1' && z==0) break;
        else if(s[i]=='0' && o!=0) o--;
        else if(s[i]=='0' && o==0) break;

    }
    cout<<o+z<<"\n";
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