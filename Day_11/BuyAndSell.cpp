#include <iostream>
using namespace std;

void bestBuyAndSell(int *arr, int n)
{
    int maxProfit = 0;
    int buyDay = 1;
    int sellDay = 1;

    for (int i = 1; i < n; i++)
    {
        int currValue = INT16_MAX;
        int buyIdx = 0;
        for (int j = 0; j < i; j++)
        {
            int newVal = arr[j];
            if (currValue > newVal)
            {
                currValue = newVal;
                buyIdx = j;
            }
        }
        int newProfit = arr[i] - currValue;
        if (maxProfit < newProfit)
        {
            maxProfit = newProfit;
            buyDay = buyIdx + 1;
            sellDay = i + 1;
        }
    }
    cout << "Best Buy Is = " << buyDay<<"\n";
    cout << "Best Sell Is = " << sellDay<<"\n";
    cout << "Maximum Profit Is = " << maxProfit<<"\n";
}

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(int);
    bestBuyAndSell(arr, n);
    return 0;
}