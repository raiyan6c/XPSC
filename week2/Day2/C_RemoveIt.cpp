#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>v;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a!=x) v.push_back(a);
    }
    if(!v.empty())
    {
        for(auto z:v)
            cout<<z<<" ";
    }
    else cout<<"\n";

}