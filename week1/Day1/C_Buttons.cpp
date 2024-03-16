#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int bb=max(a,b);
    if(a==b) cout<<a*2;
    else cout<<bb+bb-1;
}