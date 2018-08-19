class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())  
        {  
            return 0;  
        }
        int n = nums.size(),k=0;  
          
        for(int i=1;i<n;++i)  
        {  
            if(nums[i] != nums[k])  
            {  
                nums[++k] = nums[i];  
            }
        }
        nums.resize(k+1);  
        return k+1; 
    }
};