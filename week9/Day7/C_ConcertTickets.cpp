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
    ll n,m,x;
    cin>>n>>m;
    multiset<ll>st;
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        st.insert(x);
    }
    for(ll i=0;i<m;i++)
    {
        cin>>x;
        auto z=st.upper_bound(x);
        if(st.begin()==z)
        {
            cout<<"-1\n";
            continue;
        }
        else
        {
            cout<<*(--z)<<"\n";
            st.erase(z);
        }
    }
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