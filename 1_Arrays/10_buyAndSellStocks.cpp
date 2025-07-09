#include<iostream>
#include<limits.h>
using namespace std;

// T(n) = O(n + n) = O(2n) = O(n)
void findMaxProfit(int *prices, int size){
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    for(int i = 1; i < size; i++){
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
    } 
    int maxProfit = 0;
    for(int i = 0; i < size; i++){
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout << "Max Profit = " << maxProfit << endl;
}

int main(){
    int prices[] = {7, 1, 5, 3, 6, 4};
    int size = sizeof(prices) / sizeof(int);
    findMaxProfit(prices, size);
    return 0;
}