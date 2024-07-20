#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lessVal = INT_MAX;
        int profit = 0;
        for(int i=0;i<prices.size();i++){
            lessVal = min(lessVal, prices[i]);
            profit = max(profit, prices[i]-lessVal);
        }
        return profit;
    }
};