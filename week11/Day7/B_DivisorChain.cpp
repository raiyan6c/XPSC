#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<long long>
#define si set<long long>
#define pi priority_queue<long long>
#define stc stack<ll>
using namespace std;
ll setcount(ll x){
    ll cnt=0;
    while(x){
        if(x&1)cnt+=1;
        x>>=1;
    }
    return cnt;
}
void solve()
{
    ll n;
    cin>>n;
    ll cnt=setcount(n);
    vi ans;
    ans.push_back(n);
    int temp=1;
    while(cnt>1)
    {
        ll x=temp&n;
        while((temp & n)==0) temp<<=1;
        n-=temp;
        temp<<=1;
        ans.push_back(n);
        cnt=setcount(n);
    }
    while(n>1)
    {
        n>>=1;
        ans.push_back(n);
    }
    cout<<ans.size()<<"\n";
    // cout<<ans<<"\n";
    for(auto &x:ans) cout<<x<<" ";
    cout<<"\n";
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