#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<long long>
#define si set<long long>
#define pi priority_queue<long long>
#define stc stack<ll>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a-1<abs(b-c)+(c-1)) cout<<1;
    else if(a-1==abs(b-c)+(c-1)) cout<<3;
    else cout<<2;
    cout<<"\n";    
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