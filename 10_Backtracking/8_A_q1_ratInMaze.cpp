#include<iostream>
#include<string>
#include<vector>
using namespace std;

void solveMazeUtil(int maze[4][4], int x, int y, string sol, int n, vector<vector <bool>> &visited){
    if(x == n-1 && y == n-1 && maze[x][y] == 1){
        cout << sol << endl;
        return;
    }
    
    visited[x][y] = true;

    // up
    if(x-1 >= 0 && !visited[x-1][y] && maze[x-1][y] == 1){
        solveMazeUtil(maze, x-1, y, sol+"U", n, visited);
    }
    
    // down
    if(x+1 < n && !visited[x+1][y] && maze[x+1][y] == 1){
        solveMazeUtil(maze, x+1, y, sol+"D", n, visited);
    }
    
    //left
    if(y-1 >= 0 && !visited[x][y-1] && maze[x][y-1] == 1){
        solveMazeUtil(maze, x, y-1, sol+"L", n, visited);
    }

    // right
    if(y+1 < n && !visited[x][y+1] && maze[x][y+1] == 1){
        solveMazeUtil(maze, x, y+1, sol+"R", n, visited);
    }

    visited[x][y] = false;
}

void solveMaze(int maze[4][4], int n){
    string sol = "";
    vector<vector <bool>> visited(n, vector<bool> (n, false));
    if(maze[0][0] == 1){
        solveMazeUtil(maze, 0, 0, sol, n, visited);
    }
}

int main(){
    int n = 4;
    int maze[4][4] = {   
                    {1, 0, 0, 0},
                    {1, 1, 0, 1},
                    {1, 1, 0, 0},
                    {1, 1, 1, 1}
                };
    
    solveMaze(maze, n);
    return 0;
}