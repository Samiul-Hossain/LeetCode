class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ret = 0;
        int lowest = 10000;
        for(int i=0; i<prices.size(); i++){
            if(prices[i] < lowest){
                lowest = prices[i];
            }
            if(prices[i]>lowest){
                ret = max(ret, prices[i] - lowest);
            }
        }
        return ret;
    }
};