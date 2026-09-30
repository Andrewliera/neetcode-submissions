class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        for(int i = 0; i < strs.size(); i++){
            for(int j = 0; j <= strs[i].size(); j++){
                if(j <= strs[i].size()){
                    result += strs[i][j];
                }
            }
        }
        return result;

    }

    vector<string> decode(string s) {
        vector<string> result;
        string word = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '\0'){
                result.push_back(word);
                word = "";
            }
            else{
                word += s[i];
            }
        }
        return result;
    }
};
