#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<long long>
#define si set<long long>
#define pi priority_queue<long long>
#define stc stack<ll>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int& i:arr){
        cin>>i;
    }
    int num=arr[0];
    int x=-1;
    vector<int> temp;
    vector<int> temp2;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==num)
        {
            temp.push_back(i);
        }
        else
        {
            temp2.push_back(i);
            if(x==-1)
            {
                x=i;
            }
        }
    }
    if(x==-1)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
        for(auto i:temp2)
        {
            cout<<1<<" "<<i+1<<endl;
        }
        for(auto i:temp)
        {
            cout<<x+1<<" "<<i+1<<endl;
        }
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}