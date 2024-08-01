 int gameOfXor(int N , int A[]) 
    {
        // code here
        
        =================== Brute====================
        int ans=0;
        for(int i=0;i<N;i++)
        {
            int temp=0;
            for(int j=i;j<N;j++)
            {
                temp^=A[j];
                ans^=temp;
            }
        }
        
        return ans;
        
        
        =================== Optimize====================
        int ans=0;
        
        for(int i=0;i<N;i++)
        {
            int count=(i+1)*(N-i);
            
            if(count%2!=0)
            {
                ans^=A[i];
            }
        }
        
        return ans;
    }