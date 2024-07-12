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
    ll x,y,k;
    cin>>x>>y>>k;
    while(x!=1 && k)
    {
        ll ol=y-x%y;
        if(ol>k)
        {
            x+=k;
            k=0;
            break;
        }
        else
        {
            k-=ol;
            x+=ol;
            while(x%y==0)
            {
                x/=y;
            }
        }
    }
    if(k)
    {
        k=k%(y-1);
        x+=k;
    }
    cout<<x<<"\n";
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