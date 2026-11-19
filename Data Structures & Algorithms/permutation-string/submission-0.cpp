class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.size() > s2.size()){
            return false;
        }

        int perm_length = s1.size();
        map<char, int> perm;
        map<char, int> window;

        //fill map with s1 characters
        for(int i =0; i < s1.size(); i++){
            perm[s1[i]]++;
        }


        for(int r = 0; r < s2.size(); r++){
            window[s2[r]]++;
            if(r >= perm_length){
                char out = s2[r - perm_length];
                window[out]--;
                if(window[out] == 0){
                    window.erase(out);
                }
            }

            if(window == perm){
                return true;
            }
        }

        return false;
    }
};
