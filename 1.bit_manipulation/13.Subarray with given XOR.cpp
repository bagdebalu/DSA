int Solution::solve(vector<int> &A, int B) 
{
    
    
    ======================== Brute========================
	int ans=0;
	for(int i=0;i<A.size();i++)
	{
		int temp=0;
		for(int j=i;j<A.size();j++)
		{
			temp^=A[j];
			if(temp==B)
			{
				ans++;
			}
		}
	}
	
	return ans;
    ========================== OPtimize=======================
    int ans=0,pre_xor=0;
    
    map<int,int>map;
    map[0]=1;
    for(int i=0;i<A.size();i++)
    {
        pre_xor^=A[i];
        ans+=map[pre_xor^B];
        map[pre_xor]++;
    }
    return
}
