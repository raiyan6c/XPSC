#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int i=0;
        int j=n-1;
        int x1=-1;
        int x2=-1;
        while(i<j)
        {
            if(arr[i]==arr[j])
            {
                i++;
                j--;
            }
            else
            {
                x1=arr[i];
                x2=arr[j];
                break;
            }
        }
        i=0;
        j=n-1;
        bool cond1=true;
        while(i<j)
        {
            if(arr[i]==x1)
            {
                i++;
            }
            else if(arr[j]==x1)
            {
                j--;
            }
            else if(arr[i]==arr[j])
            {
                i++;
                j--;
            }
            else
            {
                cond1=false;
                break;
            }
        }
 
        bool cond2=true;
 
        i=0;
        j=n-1;
 
        while(i<j)
        {
            if(arr[i]==x2)
            {
                i++;
            }
            else if(arr[j]==x2)
            {
                j--;
            }
            else if(arr[i]==arr[j])
            {
                i++;
                j--;
            }
            else
            {
                cond2=false;
                break;
            }
        }
 
        if(cond1 || cond2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}