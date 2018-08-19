class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
	//*****************************************************
		
		k = k%nums.size();
        std::reverse(nums.begin(),nums.end());
        std::reverse(nums.begin(),nums.begin()+k);
        std::reverse(nums.begin()+k,nums.end());
        return;
	
	//*****************************************************
		
		int len = nums.size();
        if (len > 1) {
            k %= len;
            std::rotate(nums.begin(), nums.end() - k, nums.end());
        }
	}
	
//*****************************************************

public:
	void rotate(int[] nums, int k) {
        int count = k%nums.length;
        int limit = nums.length - count;

        reverse(nums,0,limit-1);
        reverse(nums,limit,nums.length-1);
        reverse(nums,0,nums.length-1);
    }
	
//子数组对称
private:
	void reverse(int[] arr,int st,int end){
		while( st < end){
			int temp = arr[st];
			arr[st] = arr[end];
			arr[end] = temp;
			st ++;
			end --;
		}
    }

};