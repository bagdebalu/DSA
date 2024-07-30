 int isPowerOfFour(unsigned int n)
    {
      // Your code goes here
      
      
         ======================= Brute=========================
      
          for(int i=0;i<n;i++)
         {
          int ans=pow(4,i);
          
          if(ans==n)
          return 1;
         }
      
          return 0;
    
         =========================== Better==========================
         
         
         if(n<=0)
         return 0;
         
         
         while(n>1)
         {
             if(n%4!=0)
             {
                 return 0;
             }
             n=n/4;
         }
         
         return 1;
         
         
        ============================= Optimize ============================
        
        
        return n>0 && n%3==1 && (n&(n-1))==0;
    }