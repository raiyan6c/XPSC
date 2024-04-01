#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
#define st set<int>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<string>alu(n);
    vector<string>lalalu(n);
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>alu[i];
        mp[alu[i]]++;
    }
    int z=0;
    string s;
    // s.pb('1');
    // cout<<s<<endl;
    bool hu=false;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<alu[i].size();j++)
        {
            string htt=alu[i].substr(0,j);
            string httt=alu[i].substr(j);
            if(mp[httt]>=1 && mp[htt]>=1) 
            {
                // lalalu.pb(alu[i]+alu[j]);
                // break;
                hu=true;
            }
            // cout<<mp[alu[i]+alu[j]]<<" ";

        }
        if(hu) s.pb('1');
        else s.pb('0');
        hu=false;

    }
    // for(auto g:alu)
    // {
    //     for(auto x:lalalu)
    //     {
    //         if(g==x)
    //         {
    //             hu=true;
    //             break;
    //         }
    //     }
    //     if(hu) s.pb('1');
    //     else s.pb('0');
    //     hu=false;
    // }
    cout<<s<<"\n";
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