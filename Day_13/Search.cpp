#include <iostream>
using namespace std;

void Bruteforce(int arr[][4], int n, int m, int key)
{
    int Idx1, Idx2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == key)
            {
                Idx1 = i + 1;
                Idx2 = j + 1;
                cout << "Index are : " << Idx1 << " " << Idx2;
                return;
            }
        }
    }
    cout << "Not exist";
}

bool SearchUpToDown(int mat[][4], int n, int m, int key)
{
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (mat[i][j] == key)
        {
            cout << "Found at cell ( " << i << ", " << j << " )\n";
            return true;
        }
        else if (mat[i][j] > key)
        {
            j--; // left
        }
        else
        {
            i++; // down
        }
    }
    cout<<"Not Found";
    return false;
}

bool SearchDownToUp(int mat[][4], int n, int m, int key)
{
    int i = n-1, j = 0;
    while (i >=0 && j <m )
    {
        if (mat[i][j] == key)
        {
            cout << "Found at cell ( " << i << ", " << j << " )\n";
            return true;
        }
        else if (mat[i][j] > key)
        {
            i--; // up
        }
        else
        {
            j++; // right
        }
    }
    cout<<"Not Found";
    return false;
}

int main()
{
    int arr[4][4] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};
    int key = 33;
    int n = 4, m = 4;
    // Bruteforce(arr, n, m, key);
    SearchUpToDown(arr, n, m, key);
    SearchDownToUp(arr, n, m, key);
    return 0;
}