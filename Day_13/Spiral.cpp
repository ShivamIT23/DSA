#include <iostream>
using namespace std;

void SpiralTransverse(int matrix[][4], int n, int m)
{
    int stRow = 0, stCol = 0;
    int edRow = n - 1, edCol = m - 1;
    while (stRow <= edRow && stCol <= edCol)
    {
        // top
        for (int j = stCol; j <= edCol; j++)
        {
            cout << matrix[stRow][j] << " ";
        }

        // right
        for (int i = stRow + 1; i <= edRow; i++)
        {
            cout << matrix[i][edCol] << " ";
        }

        ////Bottom
        for (int j = edCol - 1; j >= stCol; j--)
        {
            if(stRow == edRow){
                break;
            }
            cout << matrix[edRow][j] << " ";
        }

        /// lEFT
        for (int i = edRow - 1; i >= stRow + 1; i--)
        {
            if(stCol == edCol){
                break;
            }
            cout << matrix[i][stCol] << " ";
        }
        stRow++, stCol++;
        edRow--, edCol--;
    }
}

int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int n = 4, m = 4;
    SpiralTransverse(arr, n, m);
    return 0;
}