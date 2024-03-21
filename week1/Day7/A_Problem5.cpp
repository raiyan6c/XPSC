class Solution
{
    public:
    bool az(vector<int>&cnt)
    {
        for(int &i:cnt)
        {
            if(i!=0) return false;
        }
        return true;
    }
	int search(string pat, string txt)
	{
	    int n=txt.size();
	    vector<int>cnt(26,0);
	    for(int i=0;i<pat.length();i++)
	    {
	        char ch=pat[i];
	        cnt[ch-'a']++;
	    }
	    int i=0,j=0,res=0,k=pat.length();
	    while(j<n)
	    {
	        cnt[txt[j]-'a']--;
	        if(j-i+1==k)
	        {
	            if(az(cnt)) res++;
	            cnt[txt[i]-'a']++;
	            i++;
	        }
	        j++;
	    }
	}
    return res;
};