#include <iostream>
#include <string>
#include <map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        map<char, int> s_count;
        map<char, int> t_count;

        for(int i =0; i < s.length(); i++){
            s_count[s[i]]++;
        }
        for (int i =0; i < t.length(); i++){
            t_count[t[i]]++;
        }
        return s_count == t_count;
    }
};
