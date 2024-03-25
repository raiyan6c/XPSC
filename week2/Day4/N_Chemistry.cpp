#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,tnt=0;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>alu;
        for(int i=0;i<n;i++)
        {
            alu[s[i]]++;
        }
        for(auto x:alu)
        {
            if(x.second%2) tnt++;
        }
        tnt--;
        if(tnt<=k)  cout<<"YES\n";
        else cout<<"NO\n";

        // int s=0;
        // for(int i=0;i<n;i++)
        // {
        //     s+=i;
        // }
    }
}