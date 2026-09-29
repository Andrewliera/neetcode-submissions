class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        vector<pair<int, int>> temp;
        unordered_map<int, int> freq;

        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }

        for(const auto& i : freq){
            temp.push_back({i.second, i.first});
        }

        sort(temp.rbegin(), temp.rend());

        for(int i = 0; i < k; i++){
            result.push_back(temp[i].second);
        }

        return result;
    }
};
