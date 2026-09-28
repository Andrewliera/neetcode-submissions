class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> word_group;
        for(int i = 0; i < strs.size(); i++){
            string word = strs[i]; //copy the word
            sort(word.begin(), word.end()); // sort letters of word: cat -> act
            word_group[word].push_back(strs[i]); //push back word into word_group vector
        }

        vector<vector<string>> result;

        for(auto& i : word_group){
            result.push_back(i.second);
        }

        return result;
    }
};
