class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] == 9) 
				digits[i] = 0;
            else {
                digits[i] += 1;
                return digits;
            }
        }
		//全部为9，则需要数组扩充1位
        if (digits.front() == 0) 
			igits.insert(digits.begin(), 1);
        return digits;
		
		//********************************************
		
		int carry = 1;
		for (int i = digits.size() - 1; i >= 0; i--) {
			if (carry == 0) {
				return digits;
			}
			int tmp = digits[i] + carry;
			carry = tmp / 10;
			digits[i] = tmp % 10;
		}
		if (carry != 0) {
			vector<int> result(digits.size() + 1);
			result[0] = 1;
			return result;
		}
		return digits;
    }
};	