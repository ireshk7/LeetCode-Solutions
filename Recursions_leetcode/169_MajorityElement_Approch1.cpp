class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = 1;
        int n = nums.size();
        float ele = n/2;
        for(int i=0;i<n;i++){
            int num = 1;
            if(nums.size()==1) return nums[i];

            for(int j = i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    num++;
                }
                if(num>ele) return nums[i];
            }
        }
        return -1;
    }
};