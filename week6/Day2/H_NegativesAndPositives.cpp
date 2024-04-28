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
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    // if(a[0]<1 || a[1]<1)
    // {
    //     if(abs(a[0]))
    // }
    ll ans=0,x=0;
    for(ll i=0;i<n;i++)
    {
        // ll dp=a[i]+a[i+1];
        // ll lm=(a[i]*-1)+(a[i+1]);
        // ll rm=(a[i])+(a[i+1]*-1);
        // ll dm=(a[i]*-1)+(a[i+1]*-1);
        // cout<<dp<<" "<<lm<<" "<<rm<<" "<<dm<<endl;
        // ans+=max(dp,(max(lm,max(rm,dm))));
        // if(a[i]<1)
        // {
        //     if(a[i+1]<1)
        //     {
        //         a[i]*=-1;
        //         a[i+1]*=-1;
        //     }
        //     if(a[i+1]<-1)
        //     {
        //         if(abs(a[i])>abs(a[i+1]) && abs(a[i-1])<abs(a[i]))
        //         {
        //             a[i]*=-1;
        //             a[i+1]*=-1;
        //         }
        //     }
        //     else
        //     {
        //         a[i]*=-1;
        //         a[i-1]*=-1;                
        //     }
        // }
        if(a[i]<0)
        {
            x++;
            a[i]=-a[i];
        }
        ans+=a[i];
    }
    sort(a,a+n);
    if(x%2) ans-=(a[0]*2);
    // for(auto &x:a) ans+=x;
    cout<<ans<<"\n";
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