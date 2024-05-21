#include <iostream>
using namespace std;

void bestBuyAndSell(int *arr, int n)
{
    if (n == 0)
    {
        return;
    }
    int maxProfit = 0;
    int buyDay = 0;
    int sellDay = 0;
    int currValue = INT16_MAX;
    int buyIdx = 0;

    // for (int i = 0; i < n; i++)      ////Shivam's Code!!
    // {
    //     if (currValue > arr[i])
    //     {
    //         currValue = arr[i];
    //         buyIdx = i;
    //     }
    //     int newProfit = arr[i + 1] - currValue;
    //     if (maxProfit < newProfit)
    //     {
    //         maxProfit = newProfit;
    //         buyDay = buyIdx + 1;
    //         sellDay = i + 2;
    //     }
    // }

    for (int i = 0; i < n; i++)
    { ////Chatgpt's help!!!!
        if (arr[i] < currValue)
        {
            currValue = arr[i];
            buyIdx = i;
        }
        else if (arr[i] - currValue > maxProfit)
        {
            maxProfit = arr[i] - currValue;
            buyDay = buyIdx + 1;
            sellDay = i + 1;
        }
    }

    cout << "Best Buy Is = " << buyDay << "\n";
    cout << "Best Sell Is = " << sellDay << "\n";
    cout << "Maximum Profit Is = " << maxProfit << "\n";
}

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(int);
    bestBuyAndSell(arr, n);
    return 0;
}