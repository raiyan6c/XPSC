#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
#define si set<int>
using namespace std;
void solve()
{
    ll n,x;
    cin>>n;
    ll a[n];
    priority_queue<ll>pq;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll cz=0,s=0;
    // for(auto x:a) cout<<x<<" ";
    // cout<<endl;
    for(auto x:a)
    {
        if(x!=0) pq.push(x);
        else if(x==0 && !pq.empty())
        {
            s+=pq.top();
            pq.pop();
        }
    }
    cout<<s<<"\n";
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