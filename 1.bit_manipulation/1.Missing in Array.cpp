int missingNumber(int n, vector<int>& arr) 
    {

      
        ============================= Brute ========================= 
        for(int i=1;i<n;i++)
        {
            int j=0;
            for(;j<arr.size();j++)
            {
                if(arr[j]==i)
                break;
            }
            if(j==arr.size())
            {
                return i;
            }
        }
        
        return n;
        
        
        
        
        ========================== Better ===============================
        map<int,int>map;
        
        for(int i=0;i<n;i++)
        {
            map[arr[i]]++;
        }
        
        for(int i=1;i<=n;i++)
        {
            if(map.find(i)==map.end())
            return i;
        }
        
        
        =============================== otimize==============================
        
         int ans=n*(n+1)/2;
         
         for(int i:arr)
         {
             ans-=i;
         }
        
        return ans;
        
        
    }