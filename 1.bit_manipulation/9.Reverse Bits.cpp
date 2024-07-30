long long reversedBits(long long x) 
    {
        // code here
        
        =============================optimize===================
        unsigned int  ans=0;
        for(int i=0;i<32;i++)
        {
            if(x&(1<<i))
            {
                ans|=(1<<(31-i));
            }
        }
        
        return ans;
    }