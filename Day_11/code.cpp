#include <iostream>
using namespace std;


///// SubArrays are small continous order following parts of an array
///// Subsequence are small [not neccesarily(continous)] order following parts of an array
//// size of an subarray = n*(n+1) /2

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
            }
            cout << ", ";
        }
        cout << "\n";
    }

    return 0;
}