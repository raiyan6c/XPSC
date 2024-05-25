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
    ll n,x,y;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x>y) swap(x,y);
        string alu="";
        if(x*2<y) cout<<"NO\n";
        else
        {
            x%=3;
            y%=3;
            if(x>y) swap(x,y);
            if((x==0 && y==0) || (x==1 && y==2)) cout<<"YES\n";
            else cout<<"NO\n";
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