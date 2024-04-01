#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
#define si set<int>
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    ll a[n+1],cnt=0;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    si st;
    for(ll i=n;i>0;i--)
    {
        cnt++;
        st.insert(a[i]);
        if(cnt>st.size()) break;
    }
    cout<<n-st.size()<<"\n";
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