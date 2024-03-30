#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
#define st set<int>
using namespace std;
int n,m;
int a[201][201];

int laal(int ii,int jj)
{
    int i=ii,j=jj;
    int al=0;
    while(i>0 && j>0)
    {
        al+=a[i][j];
        i--;
        j--;
    }
    i=ii,j=jj;
    while(i>0 && j<=m)
    {
        al+=a[i][j];
        i--;
        j++;
    }
    i=ii,j=jj;
    while(i<=n && j<=m)
    {
        al+=a[i][j];
        i++;
        j++;
    }
    i=ii,j=jj;
    while(i<=n && j>0)
    {
        al+=a[i][j];
        i++;
        j--;
    }
    return al;
}

void solve()
{
    int alu=0;
    cin>>n>>m;
    // cout<<"he\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    // cout<<"HEHE\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) alu=max(alu,laal(i,j)-a[i][j]*3);
    }
    cout<<alu<<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    // cout<<"kj\n";
    while(t--)
    {
        // cout<<"hu\n";
        solve();
    }
}