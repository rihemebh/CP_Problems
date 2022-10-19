class Solution {
public:

    // greedy approach 
    int maxProfit(vector<int>& prices) {
        int profit =0; 
        int buy = prices[0];
        for (int i=1; i<prices.size(); i++){
            int sell = prices[i]; 
            
            if(buy>sell) buy = sell;
            
            if(sell-buy > profit){
                profit = sell-buy;
            }
        }
        
        
       return profit;
    }
};