#include <bits/stdc++.h> 
using namespace std;

int maximumProfit(vector<int> &prices){
    int bestBuyPrice = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < prices.size(); i++) {
        maxProfit = max(maxProfit, prices[i] - bestBuyPrice);
        bestBuyPrice = min(bestBuyPrice, prices[i]);
    }
    return maxProfit;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> prices(n);
        for (int i = 0; i < n; i++) {
            cin >> prices[i];
        }
        int maxProfit = maximumProfit(prices);
        cout << maxProfit << endl;
    }
    return 0;
}