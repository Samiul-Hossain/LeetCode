class Solution {
public:
    int maxDiff = 0;
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int low = prices[0];
        for(int i=1; i<len; i++){
            maxDiff = max(maxDiff, prices[i] - low);
            if(prices[i]<low)
                low = prices[i];
        }
        return maxDiff;
    }
};