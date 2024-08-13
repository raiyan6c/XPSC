#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<long long>
#define si set<long long>
#define pi priority_queue<long long>
#define stc stack<ll>
using namespace std;
bool hu(char c)
{
    return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}
int main()
{
    string s,ss;
    cin>>s>>ss;
    bool flag=0;
    if(s.size()!=ss.size())
    {
        cout<<"NO";
        return 0;
    }
    ll n=s.size();
    for(ll i=0;i<n;i++)
    {
        if(hu(s[i])!=hu(ss[i]))
        {
            flag=1;
            cout<<"NO";
            break;
        }
    }
    if(!flag) cout<<"YES";
}