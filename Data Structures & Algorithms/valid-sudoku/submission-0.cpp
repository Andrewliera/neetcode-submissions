class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9], columns[9], boxes[9];

        for(int r = 0; r < 9; r++){
            for(int c = 0; c < 9; c++){
                char cell = board[r][c];
                if(cell == '.'){    // if empty cell skip
                    continue;
                }
                int box = (r / 3) * 3 + (c / 3); //calculate which sub-box this cell is in

                if(rows[r].count(cell) || columns[c].count(cell) || boxes[box].count(cell)){
                    return false;   // if we have seen the current number in the row, columns or sub-box sudoku no valid
                }
                rows[r].insert(cell);
                columns[c].insert(cell);
                boxes[box].insert(cell);
            }
        }
        return true; //if we iterate through the board completely it is a valid sudoku board.
    }
};
