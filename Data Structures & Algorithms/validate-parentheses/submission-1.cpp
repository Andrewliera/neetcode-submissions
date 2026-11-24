// holiday week, tryna do a lil programming while its a busy work/life/family intense week
class Solution {
   public:
    bool isValid(string s) {

        stack<char> temp;
        char c;
        char need;

        for (int i = 0; i < s.size(); i++) {
            c = s[i];
            switch (c) {
                case ')':
                    need = '(';
                    break;

                case ']':
                    need = '[';
                    break;

                case '}':
                    need = '{';
                 break;

                default:
                    temp.push(c);
                    continue;
            }

            if( temp.empty() || need != temp.top()){
                return false;
            }
            else {
                temp.pop();
            }
        }
        if(!temp.empty()){
            return false;
        }
        return true;
    }
};
