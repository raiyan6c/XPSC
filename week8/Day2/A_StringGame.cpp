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
    ll o=0,z=0;
    for(ll i=0;s[i];i++)
    {
        if(s[i]=='1') o++;
        else z++;
    }
    if(min(o,z)%2==0) cout<<"Ramos\n";
    else cout<<"Zlatan\n";
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