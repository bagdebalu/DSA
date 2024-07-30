int maxConsecutiveOnes(int N)
    {
        // code here
        
        // ==================== Optimize =====================
        
        int ans=0,count=0;
        
        for(int i=0;i<32;i++)
        {
            if(N&(1<<i))
            {
                count++;
            }
            else
            {
                ans=max(ans,count);
                count=0;
            }
        }
        
        ans=max(ans,count);
        
        
        return ans;
    }