 int sum(int a , int b)
    {
        //code here
        =========================== Brute===============================
        
        while(b--)
        {
            a++;
        }
        
        return a;
        
        ==============================Optimize=============================
        
        int carry=0, sum=0;
        
        while(b)
        {
            sum=a^b;
            carry=(a&b)<<1;
            a=sum;
            b=carry;
        }
        return a;
    }