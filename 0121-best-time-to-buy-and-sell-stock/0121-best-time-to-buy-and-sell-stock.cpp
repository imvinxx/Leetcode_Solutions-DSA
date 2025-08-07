class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int first = prices[0];
        int profit = 0;
        for (int i=0;i<n;i++){
            int value = prices[i]-first;
            profit = max(profit,value);
            first = min(first,prices[i]);
        }
        return profit;
    }
};