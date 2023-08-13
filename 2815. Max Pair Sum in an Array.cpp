class Solution {
public:
    
    int maxdigit(int a)
    {
        int m=0;
        while(a>0)
        {
            int r=a%10;
            a/=10;
            m=m<r?r:m;
        }
        return m;
    }
    int maxSum(vector<int>& nums) {
        
        int ma=0,sum=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {   sum=0;
               // cout<<maxdigit(nums[i])<<"   "<<maxdigit(nums[j])<<endl;
                if(maxdigit(nums[i])==maxdigit(nums[j])){
                    
                   sum=nums[i]+nums[j];
                  //  cout<<"Accepted "<<sum<<endl; 
                }
                ma=ma<sum?sum:ma;
                
            }
        }
        if(ma==0)
            return -1;
        return ma;
        
    }
};
