#include<iostream>
using namespace std;

// T(n) = 2^(n+m)
int gridWays(int r, int c, int n, int m, string ans){
    if(r==n-1 && c==m-1){
        cout << ans << endl;
        return 1;
    }

    if(r>=n || c>=m){
        return 0;
    }

    // right
    int val1 = gridWays(r, c+1, n , m, ans+'R');
    // down
    int val2 = gridWays(r+1, c, n , m, ans+'D');

    return val1 + val2;
}

int main(){
    // n x m grid
    int n = 3;
    int m = 3;
    int numWays = gridWays(0, 0, n, m, "");
    cout << "Num Ways : " << numWays << endl;
    return 0;
}