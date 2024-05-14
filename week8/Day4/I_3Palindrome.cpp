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
    ll n;
    cin>>n;
    string s="",s1="a",s2="aa",s3="aab",s4="aabb";
    while(n>0)
    {
        if(n>3)
        {
            n-=4;
            s+=s4;
        }
        else if(n>2)
        {
            n-=3;
            s+=s3;
        }
        else if(n>1)
        {
            n-=2;
            s+=s2;
        }
        else if(n==1)
        {
            n--;
            s+=s1;
        }
    }
    cout<<s;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}