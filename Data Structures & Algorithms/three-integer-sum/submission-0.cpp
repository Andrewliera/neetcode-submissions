class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int b = 0;
        int c = 0;
        int sum = 0;
        for(int a =0; a < nums.size(); a++){
            if(a > 0 && nums[a] == nums[a - 1]) continue; //skip any repeated a

            b = a + 1;
            c = nums.size() - 1;


            while(b < c){
                sum = nums[a] + nums[b] + nums[c];

                if(sum > 0){
                    c--;
                }
                else if( sum < 0){
                    b++;
                } 
                else {
                    result.push_back({nums[a], nums[b], nums[c]});
                    b++;
                    c--;
                    while(b < c && nums[b] == nums[b -1])b++;
                }
            }
        }
        return result;
    }
};
