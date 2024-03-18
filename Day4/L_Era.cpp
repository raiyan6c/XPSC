#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,alu=INT_MIN,cnt=0,laal=0;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(i<a[i])
            {
                laal=max(laal,a[i]-i);
                // alu=a[i];
                // cnt=i;
            }
        }
        // if(cnt>=alu) cout<<"0\n";
        // else 
        cout<<laal<<"\n";
    }
}