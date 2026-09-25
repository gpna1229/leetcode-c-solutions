int maxProfit(int* prices, int pricesSize) {
    int min_price = prices[0], profit = 0;
    for (int i = 0; i < pricesSize; i++) {
        min_price = prices[i] < min_price ? prices[i] : min_price;
        profit = (prices[i] - min_price) > profit ? prices[i] - min_price : profit;
    }
    return profit;
}
