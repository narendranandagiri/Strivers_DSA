class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int maxP = 0;
        for(int i = 0; i < prices.size(); i++){
            maxP = max(maxP, prices[i] - mini);
            mini = min(mini, prices[i]);
        }
        return maxP;
    }
};
