#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a;
    cin>>a;
    if(a>999) cout<<a;
    else if(a>99) cout<<"0"<<a;
    else if(a>9) cout<<"00"<<a;
    else cout<<"000"<<a;
}