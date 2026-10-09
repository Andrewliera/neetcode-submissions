class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        int result = 1;
        int curr_highest = 1;
        sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i - 1]){
                continue;
            }
            if(nums[i - 1] + 1 == nums[i]){  
                curr_highest++;
            } else {
                curr_highest = 1;
            }
            if(curr_highest > result) {
                result = curr_highest;
            }
        }
        return result;
    }
};