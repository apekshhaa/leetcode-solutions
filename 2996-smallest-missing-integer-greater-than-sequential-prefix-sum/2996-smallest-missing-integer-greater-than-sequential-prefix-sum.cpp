class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        for(int j = 1;j<nums.size();j++){
            if(nums[j] == nums[j - 1] + 1){
                sum += nums[j];
            }
            else{
                break;
            }
        }
        unordered_set <int> numsSet(nums.begin(),nums.end());
        while(numsSet.count(sum)){
            sum++;
        }
        return sum;
    }
};