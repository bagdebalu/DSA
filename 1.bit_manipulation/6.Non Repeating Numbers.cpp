 vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        
        
        ========================= Brute ================================
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++)
        {
          int j=0;
          
          for(;j<nums.size();j++)
          {
              if(nums[i]==nums[j] && i!=j)
              {
                  break;
              }
          }
          if(j==nums.size())
          {
              ans.push_back(nums[i]);
          }
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;
        
        
        ==============================Better=================
        vector<int>ans;
        map<int,int>map;
        
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        
        for( int i=0;i<nums.size();i++)
        {
            if(map[nums[i]]==1)
            {
                ans.push_back(nums[i]);
            }
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;
        
          ================================optimize====================
           vector<int>ans;
           int x=0;
           
           for(int i=0;i<nums.size();i++)
           {
               x^=nums[i];
           }
           
           int LSB=x&~(x-1);
           
           int a=0,b=0;
           
           for(int i=0;i<nums.size();i++)
           {
               if(LSB&nums[i])
               a^=nums[i];
               else
               b^=nums[i];
           }
           
           ans.push_back(a);
           ans.push_back(b);
           sort(ans.begin(),ans.end());
           
           return ans;
    }