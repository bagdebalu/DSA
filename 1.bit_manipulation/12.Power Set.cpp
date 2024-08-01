vector<string> AllPossibleStrings(string s)
		{
		    // Code here
		    vector<string>ans;
		    int p=pow(2,s.length());
		    
		    for(int i=1;i<p;i++)
		    {
		        int x=i,j=0;
		        string b="";
		        
		        while(x)
		        {
		            if(x&1)
		            {
		                b+=s[j];
		            }
		            x>>=1;
		            j++;
		        }
		        ans.push_back(b);
		    }
		    
		    sort(ans.begin(),ans.end());
		    return ans;
		}