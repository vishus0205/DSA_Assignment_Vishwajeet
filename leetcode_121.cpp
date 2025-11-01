//Q121.Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX; //assuming minimum price is highest price
        int maxprofit = 0; //starting with 0 profit 

        for(int price : prices){  //for going through each days price in the array
            if(price < minprice){  //if this days price is lower than past days price
                minprice = price;  //this price becomes minprice till now
            }else if(price - minprice > maxprofit){  //else we check that, is profit today higher than last days 
                maxprofit = price - minprice; //calculation of profit 
            }
        }
        return maxprofit; //giving highest profit return 
    }

};
