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
    ll n,x,cnt=0,ans=-1;
    cin>>n;
    vi v(n);
    si st;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    x=0;
    for(ll i=0;i<n;i++)
    {
        while(st.count(v[i]))
        {
            st.erase(v[x]);
            x++;
        }
        st.insert(v[i]);
        ans=max(ans,(ll)st.size());
    }
    cout<<ans;
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