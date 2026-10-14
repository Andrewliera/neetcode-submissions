class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() <= 0){
            return false;
        }

        char tempChar;
        string temp;
        for(int i =0; i < s.size(); i++){  //iterate through string
            tempChar = s[i];  //set Character Variable to currect Char
            if(!(isalnum(tempChar))){  // if Char is not Alpha Numeric skip
                continue;
            }
            temp += tolower(tempChar); //otherwise add character to new string
        }
        int n = temp.size();
        for(int i = 0; i < n; i++ ){
            if(temp[i] != temp [n - 1 - i]){
                return false;
            }
        }
        return true;
    }
};
