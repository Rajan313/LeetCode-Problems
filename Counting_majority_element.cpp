class Solution {
public:
    int majorityElement(vector<int>& nums) {
          unordered_map<int,int> store;
          int m=floor(nums.size()/2);
        
        for(auto& it:nums ){
            store[it]++;
            if(store[it]>m)
             return it;
            
        }
        return 0;
        
       
    }
    
};