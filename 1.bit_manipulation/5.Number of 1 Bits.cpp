

int setBits(int N) {
       
        
        
        ==================== Brute ==========================
        int ans=0;
        for(int i=0;i<32;i++)
        {
            if(N&(1<<i))
            {
                ans++;
            }
        }
        
        return ans;
        
        
        ==================== Optimize ===========================
        
        int ans=0;
        
        while(N)
        {
            ans++;
            N=N&(N-1);
        }
        
        return ans;
        
        
    }