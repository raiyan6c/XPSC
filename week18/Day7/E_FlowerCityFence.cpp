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
    ll n;
    cin>>n;
    vi a(n); 
    si s1,s2;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i]; 
        s1.insert(a[i]);
    }
    if(n!=a[0])
    {
        cout<<"NO"<<endl;
        return;
    }
    ll j;
    for(ll i=0;i<n;i++)
    {
        j=i+1;
        while(j<n && a[i]==a[j])
        {
            j++;
        }
        s2.insert(j);
        i=j-1;
    }


    if(s1==s2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return;
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