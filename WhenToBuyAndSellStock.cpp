class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        // if there are no prices, the profit is 0
        if (prices.empty())
        {
            return 0;
        }
        // initialize minPrice to the first price and maxProfit to 0
        auto minPrice = prices[0];
        auto maxProfit = 0;
        // iterate through the list of prices
        for (int i = 1; i < prices.size(); ++i)
        {
            // if the current price is less than the minimum price, update the minimum price
            if (prices[i] < minPrice)
            {
                minPrice = prices[i];
            }
            // calculate the profit if we sell at the current price and update maxProfit if it's greater
            else
            {
                maxProfit = max(maxProfit, prices[i] - minPrice);
            }
        }
        // return the maximum profit found
        return maxProfit;
    }
};