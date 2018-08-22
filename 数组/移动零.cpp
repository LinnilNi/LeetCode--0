class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i = 0, j = 0; i < nums.size(); ++i) {
            if (nums[i]) {
                swap(nums[i], nums[j++]);
            }
        }
	
	//***************************************************
	
		int left = 0, right = 0;
        while (right < nums.size()) {
            if (nums[right]) {
                swap(nums[left++], nums[right]);
            }
            ++right;
        }
    }
};