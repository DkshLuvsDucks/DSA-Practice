#include <iostream>
#include <vector>
using namespace std;

#define N 8 // You can change this to any N (like 5 or 6) for smaller boards

// Function to check if (x, y) is a valid move
bool isSafe(int x, int y, int sol[N][N]) {
    return (x >= 0 && x < N && y >= 0 && y < N && sol[x][y] == -1);
}

// Function to print the solution board
void printSolution(int sol[N][N]) {
    for (int x = 0; x < N; x++) {
        for (int y = 0; y < N; y++)
            cout << sol[x][y] << " ";
        cout << endl;
    }
}

// Utility function for solving Knight's Tour
bool solveKTUtil(int x, int y, int movei, int sol[N][N],
                 int xMove[], int yMove[]) {
    if (movei == N * N)
        return true;

    for (int k = 0; k < 8; k++) {
        int next_x = x + xMove[k];
        int next_y = y + yMove[k];
        if (isSafe(next_x, next_y, sol)) {
            sol[next_x][next_y] = movei;
            if (solveKTUtil(next_x, next_y, movei + 1, sol, xMove, yMove))
                return true;
            else
                sol[next_x][next_y] = -1; // backtrack
        }
    }

    return false;
}

// Main solver function
bool solveKT() {
    int sol[N][N];

    // Initialization of solution matrix
    for (int x = 0; x < N; x++)
        for (int y = 0; y < N; y++)
            sol[x][y] = -1;

    // Knight's possible movements
    int xMove[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int yMove[8] = {1, 2, 2, 1, -1, -2, -2, -1};

    // Start from the first block
    sol[0][0] = 0;

    if (!solveKTUtil(0, 0, 1, sol, xMove, yMove)) {
        cout << "Solution does not exist" << endl;
        return false;
    } else
        printSolution(sol);

    return true;
}

int main() {
    solveKT();
    return 0;
}
