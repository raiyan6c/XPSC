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
    string s,alu="";
    cin>>s;
    ll c=0,b=0;
    for(ll i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='b') c++;
        else if (s[i]=='B') b++;
        else
        {
            if(s[i]>='A' && s[i]<='Z' && b>0) b--;
            else if(s[i]>='a' && s[i]<='z' && c>0) c--;
            else alu+=s[i];
        }
    }
    reverse(alu.begin(),alu.end());
    cout<<alu<<endl;
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