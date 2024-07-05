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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    map<int,int>mp;
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    priority_queue<pair<int,int>>pq;
    for(auto [x,y]:mp)
        pq.push({y,x});
    int alive=n;
    while(pq.size()>1)
    {
        auto r=pq.top();
        pq.pop();
        auto s=pq.top();
        pq.pop();
        r.first--;
        s.first--;
        if(r.first>0)
            pq.push(r);
        if(s.first>0)
            pq.push(s);
        alive-=2;
    }
    cout<<alive<<"\n";
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