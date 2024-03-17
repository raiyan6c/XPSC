#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,nn,nnn;
        cin>>n;
        nn=n*3;
        string s;
        map<string,int>alu;
        set<string>str[3];
        vector<string>v;
        for(int i=0;i<nn;i++)
        {
            cin>>s;
            v.push_back(s);
            alu[s]++;
        }
        int a=0,b=0,c=0,cnt=0;
        for(auto x:v)
        {
            // cout<<a<<" "<<b<<" "<<c<<endl;
            // cout<<x<<endl;
            cnt++;
            if(alu[x]==1 && cnt<=n)  a+=3;
            else if(alu[x]==2 && cnt<=n) a++;
            else if(alu[x]==1 && cnt<=2*n)  b+=3;
            else if(alu[x]==2 && cnt<=2*n) b++;
            else if(alu[x]==1 && cnt<=3*n)  c+=3;
            else if(alu[x]==2 && cnt<=3*n) c++;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
        
        
        
    }
}