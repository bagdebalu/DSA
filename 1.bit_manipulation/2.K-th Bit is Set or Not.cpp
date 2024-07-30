 bool checkKthBit(int n, int k) {
       
        
        
        ============================ Brute ==================================
        int count=0;
        for(int i=0;i<32;i++)
        {
            if(n&(1<<i) && count==k)
            return 1;
            
            count++;
            
        }
        
        return 0;
        
        
        ==========================Best=======================================
        
        return n&(1<<k);
    }