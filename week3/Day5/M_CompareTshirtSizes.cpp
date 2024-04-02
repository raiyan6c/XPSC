#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
#define si set<int>
using namespace std;
void solve()
{
    string s,ss;
    cin>>s>>ss;
    if(s[s.size()-1]=='L')
    {
        // cout<<"hu\n";
        if(ss[ss.size()-1]=='L')
        {
            if(s.size()>ss.size()) cout<<">\n";
            else if(s.size()==ss.size()) cout<<"=\n";
            else cout<<"<\n";
        }
        else if(ss[ss.size()-1]=='S') cout<<">\n";
        else if(ss[ss.size()-1]=='M') cout<<">\n";
    }
    else if(s[s.size()-1]=='M')
    {
        // cout<<"huhu\n";
        if(ss[ss.size()-1]=='M')
        {
            // if(s.size()<ss.size()) cout<<">\n";
            // else if(s.size()==ss.size()) cout<<"=\n";
            cout<<"=\n";
        }
        else if(ss[ss.size()-1]=='S') cout<<">\n";
        else if(ss[ss.size()-1]=='L') cout<<"<\n";
    }
    else if(s[s.size()-1]=='S')
    {
        // cout<<"huhuhu\n";
        if(ss[ss.size()-1]=='S')
        {
            if(s.size()<ss.size()) cout<<">\n";
            else if(s.size()==ss.size()) cout<<"=\n";
            else cout<<"<\n";
        }
        else if(ss[ss.size()-1]=='M') cout<<"<\n";
        else if(ss[ss.size()-1]=='L') cout<<"<\n";
    }
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