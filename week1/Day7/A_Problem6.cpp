vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k) {
    vector<long long>res;
    deque<long long>deq;
    int i=0,j=0;
    while(j<n)
    {
        if(a[j]<0)
        {
            deq.push_back(a[j]);
            if(j-i+1==k)
            {
                if(!deq.empty())
                {
                    res.push_back(deq.front());
                }
                else res.push_back(0);
                if(a[i]<0 && !deq.empty())
                {
                    deq.pop_front();
                }
                i++;
            }
            j++;
        }
    }
    return res;
 }