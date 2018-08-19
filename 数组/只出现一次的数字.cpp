class Solution {
public:
    int singleNumber(vector<int>& nums) {
		//神奇的位运算
		/*解题思路为:其他数字都出现两次，
		只有一个数字出现一次，思考要用什
		么方法才能让那些出现两次的数字经过
		某个操作能相互消除呢？那就是异或操作!*/
        int result = 0;
        for(int number: nums)
            result = result ^ number;
        return result;
		
		//**************************************
		sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i = i + 2)
        {	
			//遍历到最后一位，发现之前都成立直接返回最后的数字
            if (i + 1 >= nums.size()) 
				return nums[i];
			//和下一位进行比较，因为题目要求只会出现一个没有重复的数字，所以这个方法可行
			if (nums[i] != nums[i + 1]) 
				return nums[i];        
		}
        return -1;//按照题目要求这根不用不到
    }
};