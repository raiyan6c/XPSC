#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
	while(t--)
    {
		int n;
        cin>>n;
        int a[n],b[n],alu=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==alu) alu+=2;
            else alu++;
        }
        cout<<alu-1<<endl;
    }
}