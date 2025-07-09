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

bool nQueens(vector<vector <char>> boards, int row){
    int n = boards.size();
    if(row == n){
        printBoard(boards);
        return true;
    }
    int count = 0;
    for(int col=0; col<n; col++){
        if(isSafe(boards, row, col)){
            boards[row][col] = 'Q';
            if(nQueens(boards, row+1)) return true;
            boards[row][col] = '.';
        }
    }
    return false;
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
    bool isPossible = nQueens(boards, 0);
    if(isPossible){
        cout << "Yes\n";
    } else {
        cout << "No\n"; 
    }
    return 0;
}