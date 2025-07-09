#include<iostream>
#include<vector>
using namespace std;

// All 8 possible moves of a knight
int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = {-1, +1, -2, +2, -2, +2, -1, +1};

void printBoard(const vector<vector<char>>& board) {
    int n = board.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "------------------------\n";
}

bool isSafe(const vector<vector<char>>& board, int row, int col) {
    int n = board.size();
    for(int k = 0; k < 8; k++) {
        int newRow = row + dx[k];
        int newCol = col + dy[k];
        if(newRow >= 0 && newRow < n && newCol >= 0 && newCol < n){
            if(board[newRow][newCol] == 'K')
                return false;
        }
    }
    return true;
}

// placeCount keeps track of how many knights placed so far
int nKnights(vector<vector<char>>& board, int row, int col, int placeCount, int n) {
    if(placeCount == n){
        printBoard(board);
        return 1;
    }

    int count = 0;
    int size = board.size();

    for(int i = row; i < size; i++){
        for(int j = (i == row ? col : 0); j < size; j++){
            if(board[i][j] == '.' && isSafe(board, i, j)){
                board[i][j] = 'K';
                count += nKnights(board, i, j + 1, placeCount + 1, n);
                board[i][j] = '.';
            }
        }
    }

    return count;
}

int main() {
    int n;
    cout << "Enter Board Size (N): ";
    cin >> n;

    vector<vector<char>> board(n, vector<char>(n, '.'));

    int count = nKnights(board, 0, 0, 0, n);
    cout << "Total solutions: " << count << endl;

    return 0;
}
