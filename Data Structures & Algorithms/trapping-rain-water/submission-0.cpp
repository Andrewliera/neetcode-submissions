class Solution {
public:
    int trap(vector<int>& height) {

        int total = 0;
        int n = height.size();
        
        vector<int> maxRight(n);
        vector<int> maxLeft(n);

        maxLeft[0] = height[0];
        for(int i = 1; i <= n - 1; i++){
            maxLeft[i] = max(maxLeft[i - 1], height[i]);
        }

        maxRight[n - 1] = height[n - 1];
        for(int i = n - 2; i >= 0; i--){
            maxRight[i] = max(maxRight[i + 1], height[i]);
        }

        for(int i = 0; i < n; i++){
            total += min(maxLeft[i], maxRight[i]) - height[i];
        }



        return total;
    }
};
