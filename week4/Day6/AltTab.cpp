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
    string s;
    stack<string>st;
    set<string>ste;
    for(ll i=0;i<n;i++)
    {
        cin>>s;
        st.push(s);
    }
    string ss;
    // ste.insert(st.top());
    // st.pop();
    while(!st.empty())
    {
        // if(!ste.empty())
        // {
            // for(auto x:ste)
            // {
                if(ste.find(st.top())==ste.end())
                {
                    ste.insert(st.top());
                    string de=st.top();
                    ss+=de[de.size()-2];
                    ss+=de[de.size()-1];
                }
            // }
        //  }
        st.pop();
        // ste.insert(st.top());
    }
    cout<<ss;   
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin>>t;
    // while(t--)
    // {
        solve();
    // }
}