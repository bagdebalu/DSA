 bool isPowerofTwo(long long n) {

        =====================Brute==========================
        
        if(n<0)
        return 0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=pow(2,i);
            if(ans==n)
            return 1;
        }
        
        return 0;
        
        
        ====================== Better ======================
        if(n<1)
        
        return 0;
        
        while(n>1)
        {
            if(n%2==1)
            return 0;
            n=n/2;
        }
        
        return 1;
        
        
        ========================= Optimize =====================
        
        
        return n>0 && ((n&(n-1))==0);
    }