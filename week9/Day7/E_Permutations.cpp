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
    string s="";
    if(n<=3 && n>1)
    {
        cout<<"NO SOLUTION";
        return;
    }
    for(ll i=1;i<=n;i++)
    {
        if(i%2==0) cout<<i<<" ";
        else s+=to_string(i)+" ";
    }
    cout<<s;
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