class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if(k == n){
            return *max_element(nums.begin(),nums.end());
        }
        unordered_map <int,int> count;
        for(int num:nums){
            count[num]++;
        }
        if(k==1){
            int max_unique = -1;
            for(auto &[num,freq]: count){
                if(freq ==1){
                    max_unique = max(max_unique,num);
                }
            }
            return max_unique; 
        }
        int ans = -1;
        if (count[nums[0]] == 1) {
            ans = max(ans, nums[0]);
        }
        if (count[nums[n - 1]] == 1) {
            ans = std::max(ans, nums[n - 1]);
        }
        return ans;
    }
};