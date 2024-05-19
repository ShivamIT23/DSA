#include <iostream>
using namespace std;

int main()
{
    int marks[50];
    int marks2[59] = {1, 2, 3, 34521, 323, 45, 3545, 543, 54, 324, 534, 5432};

    // cout<<marks[2]<<"\n";
    // cout<<marks2[15]<<"\n";

    int n = sizeof(marks) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << marks2[i] << " ";
    }
    cout << "\n";
    return 0;
}