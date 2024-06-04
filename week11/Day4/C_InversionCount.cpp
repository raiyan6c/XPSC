#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<long long>
#define si set<long long>
#define pi priority_queue<long long>
#define stc stack<ll>
using namespace std;
ll merge(ll a[],ll st,ll md,ll ed)
{
    ll tmp[ed-st+1],i=st,j=md+1,k=0;
    ll sum=0;
    for(;i<=md && j<=ed;k++)
    {
        if(a[i]>a[j])
        {
            sum+=md-i+1;
            tmp[k]=a[j];
            j++;
        }
        else
        {
            tmp[k]=a[i];
            i++;
        }
    }
    for(;i<=md;i++,k++)
    {
        tmp[k]=a[i];
    }
    for(;j<=ed;j++,k++)
    {
        tmp[k]=a[j];
    }
    for(i=st,j=0;i<=ed;i++,j++)
    {
        a[i]=tmp[j];
    }
    return sum;
}
ll mrt(ll a[],ll st,ll ed)
{
    if(st==ed) return 0;
    ll md=(st+ed)/2;
    ll l=mrt(a,st,md);
    ll r=mrt(a,md+1,ed);
    return l+r+merge(a,st,md,ed);

}
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<mrt(a,0,n-1)<<"\n";
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