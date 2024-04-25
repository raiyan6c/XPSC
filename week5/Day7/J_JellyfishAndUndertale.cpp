#include<bits/stdc++.h>
using namespace std;
void hehehedie()
{
    long long a,b,n,k;
    cin>>a>>b>>n;
    long long ans=b;
    for(long long i=0;i<n;i++){
        cin>>k;
        ans+=min(k,a-1);
    }
    cout<<ans<<endl;
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        hehehedie();
    }
}