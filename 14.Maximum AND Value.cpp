  bool check(int arr[],int N,int pattern)
    {
        int count=0;
        
        for(int i=0;i<N;i++)
        {
            if((arr[i]&pattern)==pattern)
            {
                count++;
            }
        }
        
        return count>=2;
    }
    int maxAND (int arr[], int N)
    {
        // Your code here
        
        ===================== Brute ==========================
        
        int ans=0;
        
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                ans=max(ans,arr[i]&arr[j]);
            }
        }
        
        return ans;
        
        ======================== OPtimize =========================
        int ans=0;
        for(int i=31;i>=0;i--)
        {
            if(check(arr,N,ans|(1<<i)))
            {
                ans|=(1<<i);
            }
        }
        
        return ans;

    }