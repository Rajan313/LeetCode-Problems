class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        
        int max_pos=max_element(nums.begin(),nums.end())-nums.begin();
        int min_pos=min_element(nums.begin(),nums.end())-nums.begin();
        if(min_pos==0&&max_pos==(nums.size()-1))
            return 0;
        else if(min_pos==0)
        {
            return nums.size()-(max_pos+1);
        }
        else if(max_pos==(nums.size()-1))
        {
            return min_pos;
        }
        else if( min_pos < max_pos)
            return min_pos+(nums.size()-(max_pos+1));    
        else
        {
            int c=0;
            for(int i=min_pos;i>0;i--)
            {
                swap(nums[i],nums[i-1]);
                c++;
            }
            max_pos=max_element(nums.begin(),nums.end())-nums.begin();
            return c+(nums.size()-(max_pos+1));
            
            
        }
    }
};