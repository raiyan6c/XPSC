#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int j=1;j<n;j++) cin>>a[j];
    sort(a+1,a+n);
    int i;
    for(i=1;i<n;i++) if(i!=a[i]) break;
    cout<<i;
}