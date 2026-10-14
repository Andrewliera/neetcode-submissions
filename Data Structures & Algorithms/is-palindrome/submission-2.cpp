class Solution {
public:
    bool isPalindrome(string s) {

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
        for(int i = 0; i < (n / 2); i++ ){ // made less work by stopping halfway rather than iterating the whole string
            if(temp[i] != temp [n - 1 - i]){
                return false;
            }
        }
        
        return true;
    }
};
