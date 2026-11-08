
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxP = 0;
        int minprice = prices[0];

        for (int i = 1; i < prices.size(); i++) {

            int profit = prices[i] - minprice;

            if (profit > maxP) {
                maxP = profit;
            }

            if (prices[i] < minprice) {
                minprice = prices[i];
            }
        }

        return maxP;
    }
};
