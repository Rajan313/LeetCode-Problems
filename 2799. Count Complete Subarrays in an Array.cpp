class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        
        unordered_map<int,int> k;
        for(auto i:nums){
            k[i]++;
        }
        int a=k.size();
        int ans=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            unordered_set<int>st;
            st.insert(nums[i]);
            if(st.size()==a)
                ans++;
            
        
        for(int j=i+1;j<n;j++)
        {
            auto add=st.find(nums[j]);
            if(add==st.end())
            {
                if(st.size()<a)
                {
                    st.insert(nums[j]);
                    if(st.size()==a)
                        ans++;
                }else break;
                
            }else if(st.size()==a) ans++;
        }
        }
        return ans;
        
    }
};