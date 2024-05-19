#include <iostream>
using namespace std;

void func(int arr[])
{
    arr[0] = 1000;
}

void func2(int *ptr)
{
    ptr[0] = 2000;
}

int linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    // int marks[50];
    // int marks2[59] = {1, 2, 3, 34521, 323, 45, 3545, 543, 54, 324, 534, 5432};

    // // cout<<marks[2]<<"\n";
    // // cout<<marks2[15]<<"\n";

    // int n = sizeof(marks) / sizeof(int);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << marks2[i] << " ";
    // }
    // cout << "\n";

    // int no[] = {5, 4, 13, 1, 1, 123, 3223, 2, 4, 34, 456, 567, 45678, 5789, 9, 23, 57565, 4, 12, 9, 2};
    // int n = sizeof(no) / sizeof(int);
    // int max = no[0];
    // int min = no[0];

    // for (int i = 1; i < n; i++)
    // {
    //     if (no[i] > max)
    //     {
    //         max = no[i];
    //     }
    //     if (no[i] < min)
    //     {
    //         min = no[i];
    //     }
    // }

    // cout << "largest = " << max << "\n";
    // cout << "smallest = " << min << "\n";

    // int arr[] = {1,2,3,4,5,6};

    // cout<<*arr<<"\n";   ///arr[0]
    // func(arr);
    // cout<<*arr<<"\n";   ///arr[0]
    // func2(arr);
    // cout<<*arr<<"\n";   ///arr[0]
    // cout<<*(arr + 1)<<"\n";     ///arr[1]
    // cout<<*(arr + 2)<<"\n";     ///arr[2]

    // int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    // int key = 14;
    // int n = sizeof(arr) / sizeof(int);

    // cout<<linearSearch(arr , n , key)<<"\n";

    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    ////    Shivam's Approach  (Wrong approach as "Inside the loop, there is an arithmetic operation `n - (i + 1)` each iteration, which could potentially be slightly more computationally expensive than a simple increment/decrement")

    // for (int i = 0; i < (n / 2); i++)
    // {
        
    //     swap(arr[i] , arr[n - (i + 1)]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << ", ";
    // }

    ///     Shardha Mam's Approach  (Right approach as "more readable and easier to understand. Using two pointers (`st` and `ed`) explicitly indicates the start and end of the array, making the intention of the code clearer.")
    int st=0;
    int ed=n-1;
    while(st<ed){
        swap(arr[st],arr[ed]);
        st++;
        ed--;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}