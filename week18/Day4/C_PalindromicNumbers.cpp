#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<long long>
#define si set<long long>
#define pi priority_queue<long long>
#define stc stack<ll>
using namespace std;
void solve()
{
    ll t;
    string s;
    cin>>t>>s;
    string ss;
    for(char c:s) ss+=char('9'-c+'0');
    if(s[0]=='9')
    {
        ss[t-1]+=1;
        for(int i=t-1; i>=0; i--)
        {
            ss[i]+=1;
            if(ss[i]>'9') ss[i]-=10, ss[i-1]+=1;
        }
    }
    cout<<ss<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}