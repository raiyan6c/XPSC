#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    int j=0,t=0,c=0;
    long long cnt=0;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        if(b[i]==b[i-1] && i!=0)
        {
            cnt+=c;
            continue;
        }
        else
        {
            j=t;
            c=0;
        }
        t=j;
        while(b[i]>=a[t] && t<n)
        {
            if(a[t]==b[i])
            {
                cnt++;
                c++;
            }
            t++;
        }
    }
    cout<<cnt ;
} 