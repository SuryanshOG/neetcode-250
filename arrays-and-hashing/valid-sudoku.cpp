#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<char>> board = {{'1','2','.','.','3','.','.','.','.'},
 {'4','.','.','5','.','.','.','.','.'},
 {'.','9','8','.','.','.','.','.','3'},
 {'5','.','.','.','6','.','.','.','4'},
 {'.','.','.','8','.','3','.','.','5'},
 {'7','.','.','.','2','.','.','.','6'},
 {'.','.','.','.','.','.','2','.','.'},
 {'.','.','.','4','1','9','.','.','8'},
 {'.','.','.','.','8','.','.','7','9'}};
    vector<int> checker(10, 0);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if(board[i][j] == '.') continue;
            int digit = board[i][j] - '0';
            if(checker[digit]) {
                cout << false << endl;
                return 0;
            }
        }
        fill(checker.begin(), checker.end(), 0);
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if(board[j][i] == '.') continue;
            int digit = board[j][i] - '0';
            if(checker[digit]) {
                cout << false <<endl;
                return 0;
            }
        }
        fill(checker.begin(), checker.end(), 0);
    }
    for (int i = 1; i < 9; i += 3) {
        for (int j = 1; j < 9; j += 3) {
            for (int k = i - 1; k <= i + 1; k++) {
                for (int l = j - 1; l <= j + 1; l++) {
                    if(board[k][l] == '.') continue;
                    int digit = board[k][l] - '0';
                    if(checker[digit]) {
                        cout << false << endl;
                        return 0;
                    }
                }
            fill(checker.begin(), checker.end(), 0);
            }
        }
    }
    cout << true << endl;
    return 0;
}