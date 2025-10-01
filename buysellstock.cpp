#include <iostream>

using namespace std;

int bestbuy(int n){
    int prices[10000];
    int bestbuy[10000];

    bestbuy[0] = INT16_MAX;

    for(int i=0;i<n;i++){
        int price;
        cin >> price;
        prices[i] = price;
    }

    for(int i=1;i<n;i++){
        bestbuy[i] = min(prices[i-1],bestbuy[i-1]);
    }

    
    int max_profit = 0;

    for(int i=0;i<n;i++){
        int curr_profit = prices[i] - bestbuy[i];
        max_profit = max(max_profit,curr_profit);

        
    }

    return max_profit;


}

int main(){
    int size;

    cin >> size;

    int best_buy = bestbuy(size);

    cout << best_buy;
}