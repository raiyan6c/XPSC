class solution
{
    public:
    long maximumSumSubarray(int k, vector<int> &a , int n){
        long long s=0,tt=0;
        for(int i=0,j=0;;)
        {
            s+=a[j];
            if(j>=n) break;
            if(j-i+1==k)
            {
                tt=max(tt,s);
                s-=a[i];
                i++;
                j++;
            }
            else j++;
        }
        return tt;
        
    }
};