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
    ll l,r;
    cin>>l>>r;
    if((r-l)<(r-l+1)/2) cout<<"NO\n";
    else
    {
        int hu=0;
        cout<<"YES\n";
        for(ll i=l;i<=r;i++)
        {
            cout<<i<<" ";
            hu++;
            if(hu%2==0)
            {
                cout<<"\n";
                hu=0;
            }
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