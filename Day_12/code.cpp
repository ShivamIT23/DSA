#include <iostream>
#include <algorithm>
using namespace std;

void BubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

void SelectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minAt = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minAt])
            {
                minAt = j;
            }
        }
        swap(arr[i], arr[minAt]);
    }
}

void InsertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            // swap(arr[prev],arr[prev+1]);         //// Shivam's Approach
            arr[prev + 1] = arr[prev]; //// ChatGpt's Approach
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

void CountingSort(int *arr, int m)
{
    int maxVal = arr[0];
    int minVal = arr[0];
    for (int i = 1; i < m; i++)
    {
        maxVal = max(maxVal, arr[i]);
        minVal = min(minVal, arr[i]);
    }
    int frequency[maxVal] = {0};

    for (int j = 0; j < m; j++)
    {
        frequency[arr[j]]++;
    }

    for (int k = 0, i = minVal; i < maxVal; i++)
    {
        while (frequency[i]-- > 0)
        {
            arr[k++] = i;
        }
    }
}

void DisplayArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {5, 4, 1, 3, 2};
    int arr2[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);
    int m = sizeof(arr2) / sizeof(int);
    // BubbleSort(arr, n);
    // SelectionSort(arr, n);
    // InsertionSort(arr, n);
    // CountingSort(arr2, m);
    sort(arr2, arr2 + m, greater<int>());
    DisplayArray(arr2, m);
    return 0;
}