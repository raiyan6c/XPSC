#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,o;
    cin>>n;
    vector<long long>od;
    vector<long long>ev;
    for(int i=0;i<n;i++)
    {
        cin>>o;
        if(o%2==0) ev.push_back(o);
        else od.push_back(o);
    }
    long long evs=0,ods=0;
    if(!ev.empty())
    {
        for(auto x:ev)
        {
            evs+=x;
        }
    }
    if(!od.empty())
    {
        for(auto x:od)
        {
            ods+=x;
        }
    }
    long long ts=evs+ods;
    if(ts%2==0) cout<<ts;
    else
    {
        sort(od.begin(),od.end());
        ts-=od.front();
        cout<<ts;
    }
    
}