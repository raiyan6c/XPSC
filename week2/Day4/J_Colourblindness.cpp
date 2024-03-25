#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    // cout<<t%2;
    while(t--)
    {
        int n;
        cin>>n;
        string s,ss;
        cin>>s>>ss;
        for(int i=0;s[i];i++)
        {
            if(s[i]=='G') s[i]='B';
            if(ss[i]=='G') ss[i]='B';
        }
        // cout<<s<<" "<<ss<<endl;
        if(s==ss) cout<<"YES\n";
        else cout<<"NO\n";
    }
}