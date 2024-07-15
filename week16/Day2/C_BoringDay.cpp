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
        ll n,l,r;
        cin>>n>>l>>r;
        vi a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll i=0,j=0,sum=0,ans=0;
        while(j<n)
        {
            sum+=a[j];
            while(sum>r)
                {
                    sum-=a[i];
                    i++;
                }  
            if(sum<l) j++;
            else if(sum>=l && sum<=r)
            {
                ans++;
                j++;
                i=j;
                sum=0;
            }
        }
        cout<<ans<<endl;
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