class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        int str_size = 0;
        string curr_string = "";
        for(int i = 0; i < strs.size(); i++){
            curr_string = strs[i];
            str_size = curr_string.size();
            result += to_string(str_size) + "#" + curr_string;
        }
        return result;
    }

    vector<string> decode(string s) {
        int i = 0;
        int j = 0;
        int length = 0;
        vector<string> result;
        while(i < s.size()){
            j = s.find('#', i);
            length = stoi(s.substr(i, j - i));
            result.push_back(s.substr(j + 1, length));
            i = j + 1 + length;
        }
        return result;
    }
};
