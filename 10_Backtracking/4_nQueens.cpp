#include<iostream>
#include<vector>
using namespace std;

// T(n) = O(n!)
// SC : O(n*n)

void printBoard(vector<vector <char>> boards){
    int n = boards.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << boards[i][j] << " " ;
        }
        cout << endl;
    }
    cout << "------------------------\n";
}

bool isSafe(vector<vector <char>> boards, int row, int col){
    int n = boards.size();
    // horizontal
    for(int j=0; j<n; j++){
        if(boards[row][j] == 'Q'){
            return false;
        }
    }

    // vertical
    for(int i=0; i<n; i++){
        if(boards[i][col] == 'Q'){
            return false;
        }
    }

    // diagonal left
    for(int i=row, j=col; i>=0 && j>=0; i--, j--){
        if(boards[i][j] == 'Q'){
            return false;
        }
    }
    
    // diagonal right
    for(int i=row, j=col; i>=0 && j<=n; i--, j++){
        if(boards[i][j] == 'Q'){
            return false;
        }
    }

    return true;
}

int nQueens(vector<vector <char>> boards, int row){
    int n = boards.size();
    if(row == n){
        printBoard(boards);
        return 1;
    }
    int count = 0;
    for(int col=0; col<n; col++){
        if(isSafe(boards, row, col)){
            boards[row][col] = 'Q';
            count += nQueens(boards, row+1);
            boards[row][col] = '.';
        }
    }
    return count;
}

int main(){
    vector<vector <char>> boards;
    int n;
    cout << "Enter Board Size: ";
    cin >> n;
    for(int i=0; i<n; i++){
        vector<char> newRow;
        for(int j=0; j<n; j++){
            newRow.push_back('.');
        }
        boards.push_back(newRow); 
    }
    int count = nQueens(boards, 0);
    cout << "count : " << count << endl;
    return 0;
}