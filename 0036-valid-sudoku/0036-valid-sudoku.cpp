class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> boxes(9);

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                char element = board[i][j];

                // Empty cell
                if (element == '.') {
                    continue;
                }

                // Find the 3x3 box
                int box = (i / 3) * 3 + (j / 3);

                // Duplicate found
                if (rows[i].count(element) ||
                    cols[j].count(element) ||
                    boxes[box].count(element)) {
                    return false;
                }

                // Add element
                rows[i].insert(element);
                cols[j].insert(element);
                boxes[box].insert(element);
            }
        }

        return true;
    }
};