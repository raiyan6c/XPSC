#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,cnt=0;
    cin>>s>>t;
    for(int i=0;i<=s;i++)
    {
        for(int ii=0;ii+i<=s;ii++)
        {
            for(int iii=0;iii+ii+i<=s;iii++)
            {
                if(i*ii*iii<=t) cnt++;
            }
        }
    }
    cout<<cnt;
}