#include <iostream>
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
    int n = sizeof(arr) / sizeof(int);
    // BubbleSort(arr, n);
    SelectionSort(arr, n);
    DisplayArray(arr, n);
    return 0;
}