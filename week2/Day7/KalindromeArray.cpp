#include<bits/stdc++.h>
// #define ll long long;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x,y;
        cin>>n;
        long long a[n];
        set<long long>st;
        map<long long,long long>mp;
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int hu=0;
        int i=0,j=n-1;
        while(i<j)
        {
            if(a[i]!=a[j])
            {
                hu=1;
                x=a[i];
                y=a[j];
                break;
            }
            i++;
            j--;
        }
        // cout<<hu<<endl;
        if(!hu) cout<<"YES\n";
        else
        {
            int alu=0;
            vector<long long>vx,vy;
            for(long long i=0;i<n;i++)
            {
                if(a[i]!=x) vx.push_back(a[i]);
            }
            for(long long i=0;i<n;i++)
            {
                if(a[i]!=y) vy.push_back(a[i]);
            }
            i=0,j=vx.size()-1;
            while(i<j)
            {
                if(vx[i]!=vx[j])
                {
                    alu=1;
                    break;
                }
                i++;
                j--;
            }
            i=0,j=vy.size()-1;
            while(i<j)
            {
                if(vy[i]!=vy[j])
                {
                    alu=1;
                    break;
                }
                i++;
                j--;
            }
            if(alu) cout<<"NO\n";
            else cout<<"YES\n";
 
        }
        // if(!hu || n) cout<<"YES\n";
        // else cout<<"NO\n";
        
    }
}