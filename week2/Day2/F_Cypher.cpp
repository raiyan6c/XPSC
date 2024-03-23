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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x;
        string s;
        for(int i=0;i<n;i++)
        {
            cin>>x>>s;
            for(int j=0;s[j];j++)
            {
                if(s[j]=='U')
                {
                    a[i]--;
                    if(a[i]==-1) a[i]=9;
                }
                else
                {
                    a[i]++;
                    if(a[i]==10) a[i]=0;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
}