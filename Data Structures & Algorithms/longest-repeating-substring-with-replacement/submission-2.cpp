class Solution {
public:

    //helper function
    int getMax(map<char, int>& count){
            int temp = 0;
            for(auto& p: count) temp = max(temp, p.second);
            return temp;
    }

    int characterReplacement(string s, int k) {
        int l = 0; 
        int best = 0;
        map<char, int> count;

        for(int r = 0; r < s.size(); r++){
            count[s[r]]++;
            
            while(((r - l + 1) - getMax(count)) > k ){
                count[s[l]]--;
                l++;
            }
            best = max(best, r - l + 1);
        }
        return best;
    }
};
