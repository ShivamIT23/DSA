#include <iostream>
using namespace std;

int DiagonalSum(int matrix[][3], int n)
{
    int sum = 0;

    // for(int i =0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i==j){
    //             sum += matrix[i][j];
    //         } else if(j==n-i-1){
    //             sum += matrix[i][j];
    //         }
    //     }
    // }
    
    ////Shivam's Logic

    for(int i=0;i<n;i++){
        sum += matrix[i][i];
        if(i== n-i-1){
            continue;
        }
        sum+=matrix[i][n-i-1];
    }

    //// Shardha's Logic

    // for(int i=0;i<n;i++){
    //     sum += matrix[i][i];
    //     if(i!= n-i-1){
    //     sum+=matrix[i][n-i-1];
    //     }
    // }

    return sum;
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int matrix2[3][3] = {{1, 2, 3}, {4,5, 6 }, {7,8,9}};
    int n = 4;
    cout<<DiagonalSum(matrix2 , 3);
    return 0;
}