#include <iostream>
using namespace std;

int binSearch(int *arr, int n, int key)
{
    int st = 0, ed = n - 1;
    while (st <= ed) {
        int mid = (st + ed) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            st = mid + 1;
        }
        else{
            ed = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2,4,6,7,8,9,12,14,16};
    int key=5;
    int n = sizeof(arr) / sizeof(int);

    cout<<binSearch(arr,n,key)<<"\n";

    return 0;
}