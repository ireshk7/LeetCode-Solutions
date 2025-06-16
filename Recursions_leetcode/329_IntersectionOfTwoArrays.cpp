class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2;j++){
                if(nums1[i]==nums2[j]){
                    if(!isPresent(result,nums1[i])){
                        result.push_back(nums1[i])
                    }
                    break;
                }
            }
        }
        return result;

    }

}


bool isPresent(vector<int>& result, int value){
    for(num:result){
        if(num == value){
            return true;
        }

    }
    return false;   
}