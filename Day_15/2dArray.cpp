#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the number of rows : ";
    cin >> rows;
    cout << "\nEnter the number columns : ";
    cin >> cols;
    int **matrix = new int *[rows];

    for(int i=0;i<rows;i++){
        matrix[i] = new int[cols];
    }

    //data store 
    int x= 1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            matrix[i][j] = x++;
        }
    }
    

    //data print
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<< " ";
        }
        cout<<"\n";
    }
    delete[] matrix;
    return 0;
}