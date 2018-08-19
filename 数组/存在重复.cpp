class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
		//先排序，再找
        sort(nums.begin(),nums.end());
        for(int i = 1;i < nums.size();++i){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
		
		//******************************************
		//利用集合set的不允许重复元素的特点
		set<int> m;
        for(int i = 0;i < nums.size(); ++i){
			if(m.find(nums[i])!=m.end())
				return true;
			else
				m.insert(nums[i]);
			}
        return false;
		
		//******************************************
		//运行超时了...
		int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++)
                if(nums[i] == nums[j])
                    return true;
        }
        return false;
		
    }
};