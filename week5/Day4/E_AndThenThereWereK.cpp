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
    ll n,x=1;
    cin>>n;
    ll d=0;
    bool hu=false;

    // for(ll i=31;i>0;i--)
    // {
    //     x=n&(1<<i);
    //     // cout<<x<<"Hu\n";
    //     if(x==0)
    //     {
    //         cout<<i<<"ha"<<x<<"hu\n";
    //      }   
    
    while(x*2<=n)
    {
        x*=2;
    }
    cout<<x-1<<endl;


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