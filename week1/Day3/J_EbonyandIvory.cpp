#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,hu=0;
    cin>>a>>b>>c;
    for(int i=0;i<=10000;i++)
    {
        if(c-(b*i)<0) break;
        // cout<<c-(b*i)<<endl;
        if((c-(b*i))%a==0)
        {
            hu=1;
            break;
        }
    }
    if(hu==1) cout<<"Yes";
    else cout<<"No";
}