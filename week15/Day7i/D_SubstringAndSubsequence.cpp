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
    string a,b;
    cin>>a>>b;
    ll ans=a.size()+b.size();
    for(ll i=0;i<b.size();i++)
    {
        ll j=i,k=0;
        while(j<b.size())
        {
            while(k<a.size() && a[k]!=b[j])
            {
                k++;
            }
            if(k<a.size() && a[k]==b[j])
            {
                k++;
                j++;
            }
            else break;
        }
        ans=min(ans,(ll)a.size()+(ll)b.size()-(j-i));
    }
    cout<<ans<<"\n";
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