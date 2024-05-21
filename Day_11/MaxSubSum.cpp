#include <iostream>
using namespace std;

int maxSubarraySum(int *arr, int n)
{
    int maxSum = arr[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currSum = 0;
            for (int k = i; k <= j; k++)
            {
                currSum += arr[k];
            }
            maxSum = max(maxSum, currSum);
        }
    }
    return maxSum;
}

int maxSubarraySum2(int *arr, int n)
{
    int maxSum = arr[0];
    for (int i = 0; i < n; i++)
    {
        int currSum = 0;
        for (int j = i; j < n; j++)
        {
            currSum += arr[j];
            maxSum = max(maxSum, currSum);
        }
    }
    return maxSum;
}

int kadaneAlogrithm(int *arr, int n)
{
    int maxSum = arr[0];
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    // cout << maxSubarraySum2(arr, n);
    cout << kadaneAlogrithm(arr, n);

    return 0;
}