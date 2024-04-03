#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,h,x;
	    cin>>n>>m>>h;
	    vector<int>vi,vii;
	    for(int i=0;i<n;i++)
        {
            cin>>x;
            vi.push_back(x);
        }
	    for(int i=0;i<m;i++)
        {
            cin>>x;
            vii.push_back(x);
        }
	    sort(vi.begin(),vi.end(),greater<int>());
	    sort(vii.begin(),vii.end(),greater<int>());
	    int mn=min(n,m),s=0;
	    for(int i=0;i<mn;i++)
	    {
	        s+=min(vi[i],h*vii[i]);
	    }
	    cout<<s<<"\n";
	    
	}

}
