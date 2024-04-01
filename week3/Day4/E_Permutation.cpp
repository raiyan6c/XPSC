#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
#define st set<int>
using namespace std;
void solve()
{
    int n,z;
    cin>>n;
    int nn=n;
    int a[n][n+1];
    vi vone,vtwo;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            cin>>a[i][j];
        }
    }
    map<int,int>mp;
    int alu=0,alubukhara=0,loop=0,loopi=0;
    alu=a[0][0];
    for(int j=1;j<n;j++)
    {
        
        if(a[j][0]!=alu)
        {
            alubukhara=a[j][0];
            loopi=j;
        }
        // cout<<a[j][0];
        
        // loop=j;
        // if(alu!=a[j][0])
        // {
        //     alubukhara=a[j][0];
        //     loopi=j;
        // }
        mp[a[j][0]]++;
    }
    // cout<<alu<<" "<<alubukhara<<endl;
    if(mp[alubukhara]>mp[alu])
    {
        vone.pb(alubukhara);
        for(int i=0;i<n-1;i++) vone.pb(a[loop][i]);
    }
    else
    {
        vone.pb(alu);
        for(int i=0;i<n-1;i++) vone.pb(a[loopi][i]);
    }
    for(auto x:vone) cout<<x<<" ";
    cout<<"\n";
    
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n-1;j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(auto x:vone) cout<<x<<" ";
    // cout<<endl;
    // for(auto x:vtwo) cout<<x<<" ";
    // cout<<endl;
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