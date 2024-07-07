class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int drinked_btl = numBottles;
        while(numBottles >= numExchange)
        {
            int bottles_after_exchange = numBottles / numExchange;
            drinked_btl+=bottles_after_exchange;

            int remaining_btl = numBottles % numExchange;

            numBottles = bottles_after_exchange + remaining_btl;
        }
        return drinked_btl;
    }
};