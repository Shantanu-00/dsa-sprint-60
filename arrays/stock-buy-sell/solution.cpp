class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,mini=INT_MAX;
        for(int price: prices){
            profit= max(profit,price-mini);
            mini= min(price,mini);
            
        }
        return profit;
    }
};