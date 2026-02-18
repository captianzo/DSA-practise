#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int maxProfit = 0, low, high = 0, profit, buyDay = 0, sellDay = 0;
    low = prices[0];
    for (int i = 0; i < pricesSize; i++){
        if (prices[i] > high){
            high = prices[i];
            sellDay = i;
        }
        else if (prices[i] < low){
            low = prices[i];
            buyDay = i;
        }

        if (buyDay > sellDay){
            high = 0;
        }

        if (low < high && buyDay < sellDay){
            profit = high - low;
            if (profit > maxProfit){
                maxProfit = profit;
            }
        }
    }
    if (maxProfit <= 0){
        return 0;
    }

    return maxProfit;
}

int main() {
    int prices[] = {4, 2, 1, 7};
    int pricesSize = sizeof(prices) / sizeof(prices[0]);

    int result = maxProfit(prices, pricesSize);

    printf("Maximum Profit: %d\n", result);

    return 0;
}
