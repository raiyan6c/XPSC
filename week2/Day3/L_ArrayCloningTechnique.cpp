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
        int a[n],z=INT_MIN,tc=0;
        for(int i=0;i<n;i++) cin>>a[i];  
        map<int,int>alu;
        for(int i=0;i<n;i++) alu[a[i]]++;
        for(auto x:alu)
        {
            z=max(z,x.second);
        }
        tc=n-z;
        int j=tc;
        for(j;;j++)
        {
            if(tc<=0) break;
            tc-=z;
            z+=z;
        }
        cout<<j<<"\n";
    }


}