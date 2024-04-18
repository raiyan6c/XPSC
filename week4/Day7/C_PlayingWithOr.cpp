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
    ll k,n;
    cin>>n>>k;
    ll a[n+1],cnt=0;
    for(ll i=1;i<=n;i++) cin>>a[i];
    ll l=1,r=k;
    bool hu=false;
    // for(ll i=1;i<=r;i++)
    // {
    //     // if(r<k)
    //     // {
    //     //     r++;
    //         if(a[i]%2) hu=true;;
    //     // }
    // }
    // if(hu) cnt++;
    while(r<=n)
    {
        bool huhu=false;
        for(ll i=l;i<=r;i++)
        {
            if(a[i]%2)
            {
                huhu=true;
                break;
            }
        }
        l++;
        r++;
        if(huhu==true) cnt++;
    }
    cout<<cnt<<"\n";
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