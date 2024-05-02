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
    ll n,k;
    cin>>n>>k;
    vi v(k);
    for(ll i=0;i<k;i++) cin>>v[i];
    sort(v.begin(),v.end());
    // for(auto &x:v) cout<<x;
    ll l=0,r=k-1,cnt=0,s=0;
    while(r>=0)
    {
        if(v[r]<=s) break;
        // else
        // {
            s+=n-v[r];
            cnt++;
        // }
        r--;
    }
    cout<<cnt<<endl;

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