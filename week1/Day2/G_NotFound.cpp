#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,si="abcdefghijklmnopqrstuvwxyz";
    cin>>s;
    sort(s.begin(),s.end());
    int a[26]={0},k=0;
    char z=0;
    for(int i=0;i<s.size();i++)
    {
        int x=s[i]-'a';
        a[x]++;
    }

    for(int i=0;i<26;i++)
    {
        if(a[i]==0)
        {
            z=i+'a';
            break;
        }
    }
    if(z!=0) cout<<z;
    else cout<<"None";

}