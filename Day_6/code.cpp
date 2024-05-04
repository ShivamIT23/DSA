#include <iostream>
using namespace std;

int main()
{
    // int n;

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout<<i+1<<" ";
    //     }
    //     cout<<endl;
    // }

    ///     Star Pattern

    int n = 6;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    ///     Star Pattern - Inverted

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    ////    Half Pyramid Pattern  

    // for(int i = 0 ; i<n;i++){
    //     for(int j = 0; j<i+1;j++){
    //         cout<<j+1;
    // }
    // cout<<endl;
    // }

    ////    Character INcrease Pyramid  

    char ch = 'A';
    for(int i = 0 ; i<n;i++){
        for(int j = 0; j<i+1;j++){
            cout<<ch++;
    }
    cout<<endl;
    }

    return 0;
}