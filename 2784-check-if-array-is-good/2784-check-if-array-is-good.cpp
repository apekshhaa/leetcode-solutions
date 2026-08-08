class Solution {
public:
    bool isGood(vector<int>& nums) {
        int max_num = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max_num){
                max_num=nums[i];
            }
        }
        if(nums.size()!=max_num+1){
            return false;
        } 
        std::unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }
        for (int i = 1; i < max_num; ++i) {
            if (counts[i] != 1) {
                return false;
            }
        }
        return counts[max_num] == 2;
    }
};