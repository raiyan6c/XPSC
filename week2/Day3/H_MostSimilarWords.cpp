#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,z=INT_MAX,s=0;
        cin>>n>>k;
        string a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                s=0;
                for(int l=0;l<k;l++)
                {
                    int dif=abs(a[i][l]-a[j][l]);
                    s+=dif;
                }
                z=min(z,s);
            }
            
        }
        cout<<z<<"\n";
    }
}