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
    double x,y,a,b;
    cin>>x>>y;
    if(x==y)
    {
        cout<<"=";
        return;
    }
    a=log(x);
    a*=y;
    b=log(y);
    b*=x;
    if(a==b) cout<<"=";
    else if(a<b) cout<<"<";
    else cout<<">";
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