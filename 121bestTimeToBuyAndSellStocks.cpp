class Solution {
public:
    void findMaxProfit(vector<int>& prices,int &miniPrice,int &maxProfit,int index){
        if(index == prices.size())  return;

        if(prices[index] < miniPrice){
            miniPrice = prices[index];
        }
        if(prices[index] - miniPrice > maxProfit){
            maxProfit = prices[index]-miniPrice;
        }
        findMaxProfit(prices,miniPrice,maxProfit,index+1);
    }
    int maxProfit(vector<int>& prices) {
       int miniPrice = INT_MAX;
       int maxProfit = INT_MIN;
       findMaxProfit(prices,miniPrice,maxProfit,0);
       return  maxProfit;
    }
};