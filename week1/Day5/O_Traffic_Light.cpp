#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char ch;
        cin>>n>>ch;
        string s;
        cin>>s;
        s+=s;
        int chx=0,gx=0,ans=0;
        bool hu=false;
        for(int i=0;s[i];i++)
        {
            if(s[i]==ch && !hu)
            {
                chx=i;
                hu=true;
            }
            if(s[i]=='g' && hu)
            {
                gx=i;
                hu=false;
            }
            ans=max(ans,gx-chx);
        }
        if(ch=='g') cout<<"0\n";
        else cout<<ans<<"\n";
        
    }
}