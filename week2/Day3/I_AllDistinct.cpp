#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1],dem=0;
        for(int i=1;i<=n;i++) cin>>a[i];
        map<int,int>alu;
        for(int i=1;i<=n;i++) alu[a[i]]++;
        for(auto x:alu) dem+=x.second-1;
        if(dem%2) dem++;
        cout<<n-dem<<"\n";
    }
}