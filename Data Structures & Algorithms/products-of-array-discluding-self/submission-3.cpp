class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> result(n, 1);
        vector<int> left(n, 1);
        vector<int> right(n, 1);

        int running = 1;
        
        for(int i = 0; i < n; i++){
            left[i] = running;
            running *= nums[i];
        }

        running = 1;
        for(int i = n - 1; i >= 0; i--){
            right[i] = running;
            running *= nums[i]; 
        }

        for(int i = 0; i < n; i++){
            result[i] = left[i] * right[i];
        }

        return result;
    }
};
