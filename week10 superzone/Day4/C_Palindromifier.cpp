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
    string s;
    cin>>s;
    bool alu=false;
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-i-1]) 
        {
            alu=true;
            break;
        }
    }
    if(!alu) cout<<"0\n";
    else 
    {
        cout<<"3\n";
        cout<<"L 2\n";
        cout<<"R 2\n";
        cout<<"R "<<(2*s.size())-1<<"\n";
    }

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