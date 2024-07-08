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
    ll n,k,ans=0,x;
    cin>>n>>k;
    vi nums(31,0);
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        ll j=1,l=0;
        while(x)
        {
            if((x&j)==1)
            {
                nums[l]++;
            }
            x>>=1;
            l++;
        }
    }
    for(ll i=30;i>=0;i--)
    {
        if(n-nums[i]<=k)
        {
            k-=n-nums[i];
            nums[i]=n;
        }

    }
    for(ll i=0;i<=30;i++)
    {
        if(nums[i]==n)
        {
            ans=(ans | (1<<i));
        }
    }
    cout<<ans<<endl;
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