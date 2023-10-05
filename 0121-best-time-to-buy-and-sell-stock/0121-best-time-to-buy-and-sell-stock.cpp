class Solution {
public:
    void profitfinder(vector<int>& prices,int i,int&minprice,int&maxprofit)
    {
        //base
        if(i==prices.size()) return;

        //1st case
        if(prices[i]<minprice) minprice=prices[i];
        int todaysell=prices[i]- minprice;
        if(todaysell>maxprofit) maxprofit=todaysell;
        
        profitfinder(prices,i+1,minprice,maxprofit);
    }

    int maxProfit(vector<int>& prices) {
       int minprice=INT_MAX;
       int maxprofit=INT_MIN;

       profitfinder(prices,0,minprice,maxprofit);
       return maxprofit; 
    }
};