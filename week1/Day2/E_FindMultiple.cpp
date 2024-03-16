#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,cc;
    cin>>a>>b>>c;
    cc=c;
    int hu=0,l=1,alu=0;
    while(cc<=b)
    {
        hu=1;
        cc=c*l;
        l++;
        if(cc<=b) alu=cc;
    }
    if(a==c || b==c) cout<<a;
    else if(hu && alu>a && alu<b) cout<<alu;
    else cout<<-1;
}