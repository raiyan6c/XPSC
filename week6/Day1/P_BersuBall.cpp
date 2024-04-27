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
    ll n,m;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    cin>>m;
    ll b[m];
    for(ll i=0;i<m;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);

    // cout<<endl;
    // for(ll i=0;i<n;i++) cout<<a[i]<<" ";
    // cout<<endl;
    // for(auto z:b) cout<<z<<" ";
    // cout<<endl;

    ll x=0,y=0,cnt=0;
    while(x<n && y<m)
    {
        if(abs(a[x]-b[y])<2)
        {
            // cout<<"x"<<x<<" "<<"y"<<y<<endl;
            cnt++;
            x++;
            y++;
        }
        else if(a[x]<b[y]) x++;
        else if(a[x]>b[y]) y++;
        else
        {
            x++;
            y++;
        }
    }
    cout<<cnt<<"\n";

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    // cin>>t;
    // while(t--)
    // {
        solve();
    // }
}