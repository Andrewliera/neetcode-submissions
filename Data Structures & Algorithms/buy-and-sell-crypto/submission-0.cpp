class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = prices[0];
        int best_profit = 0;

        for(int i = 1; i < prices.size(); i++){
            if((prices[i] - lowest) > best_profit){
                best_profit = prices[i] - lowest;
            }

            lowest = min(lowest, prices[i]);
        }
        return best_profit;
    }
};
 