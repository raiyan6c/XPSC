#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<long long>
#define si set<long long>
#define pi priority_queue<long long>
#define stc stack<ll>
using namespace std;
void solve(){
    ll n;
    cin>>n;
    int x=1,y=0,cnt=0;
    while(x*2<=n)
    {
        x*=2;
        cnt++;
    }
    int ans=1;
    bool hu=false;
    for (int i=cnt-1;i>=0;i--)
    {
        if((n&1<<i))
        {
            y|=(1<<i);
            hu=true;
        }
        else if (hu) ans*=2;
    }
    cout<<ans<<endl;
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