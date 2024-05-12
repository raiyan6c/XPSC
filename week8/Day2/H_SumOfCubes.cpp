#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<long long>
#define si set<long long>
#define pi priority_queue<long long>
#define stc stack<ll>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    map<ll,ll>mp;
    for(ll i=1;i<=10000;i++) mp[i*i*i]++;  
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        ll hu=0;
        for(ll i=1;i<10000;i++)
        {
            if(mp.find(x-(i*i*i))!=mp.end())
            {
                cout<<"YES\n";
                hu=1;
                break;
            }
        }
        if(hu==0) cout<<"NO\n";
    }
}