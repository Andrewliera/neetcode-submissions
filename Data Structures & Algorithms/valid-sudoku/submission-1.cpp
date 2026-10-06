class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       unordered_set<char> rows[9], columns[9], boxes[9];

       for(int r = 0; r < 9; r++){
        for(int c = 0; c < 9; c++){
            char cell = board[r][c];  // set the cell for this step of iteration
            if(cell == '.'){    // if value at cell is '.' skip this step of iteration
                continue;
            }

            int box = (r / 3) * 3 + ( c / 3);  // calculate for sub-box for this step of iteration

            if(rows[r].count(cell) || columns[c].count(cell) || boxes[box].count(cell)){
                return false;
            }
            rows[r].insert(cell);
            columns[c].insert(cell);
            boxes[box].insert(cell);
        }
       }
       return true; //resubmitted because im weak to these sort of problems and need to recall solution from memory
    }
};
