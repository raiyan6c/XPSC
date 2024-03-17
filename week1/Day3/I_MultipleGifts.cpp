#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y;
    cin>>x>>y;
    long long cnt=0,z=x;
    for(int i=2;i<=y;)
    {
        if(z>=y) break;
        z=i*z;
        // cout<<z<<endl;
        if(z<=y) cnt++;
    }
    cout<<cnt+1;

}