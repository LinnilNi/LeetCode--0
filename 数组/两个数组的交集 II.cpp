class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //先对两个数组进行排序
		sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
		//构建新数组用来存放结果
        vector<int> res;
        int L1 = 0;
        int L2 = 0; 
        while(L1 < nums1.size()&&L2 < nums2.size()){
			/*
			判断是否存在相等。
			若存在将nums1[L1]插入res中，
			若不存在且nums1[L1]>nums2[L2]，说明nums1[L1]的值小了，应该让nums1[L1+1]与nums2[L2]来经行比较；
			若不存在且nums1[L1]<nums2[L2]，说明nums2[L2]的值小了，应该让nums2[L1+1]与nums1[L1]来经行比较
			*/
            if(nums1[L1] == nums2[L2]){
                res.push_back(nums1[L1]);
                ++L1;
                ++L2;
            }else if(nums1[L1] > nums2[L2]){
                ++L2;
            }else{
                ++L1;
            }
        }
        return res; 
		
		//********************************************************************************************************
		
		map<int,int> cnt1;
        map<int,int> cnt2;
        vector<int> ret;        
        for(int i = 0;i < nums1.size();++i){
            if(cnt1.find(nums1[i])!=cnt1.end()){  
                cnt1[nums1[i]]++;  
            }  
            else{  
                cnt1[nums1[i]] = 1;  
            }   
        }        
        for(int i = 0;i < nums2.size();++i){
            if(cnt2.find(nums2[i])!=cnt2.end()){  
                cnt2[nums2[i]]++;  
            }  
            else{  
                cnt2[nums2[i]] = 1;  
            }  
        }        
        map<int,int>::iterator it1;
        map<int,int>::iterator it1;
        for(it1 = cnt1.begin();it1!= cnt1.end();++it1){
            it2 = cnt1.find(it1->first);
            if(it2!=cnt2.end()){
                if(it2->second == it1->second){
                    for(int i = 0;i < it1->second; ++i){
                        ret.push_back(it1->first);
                    }
                }
            }			
        }
        return ret;
    }
};