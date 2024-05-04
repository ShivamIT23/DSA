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

    // int n = 6;
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

    // char ch = 'A';
    // for(int i = 0 ; i<n;i++){
    //     for(int j = 0; j<i+1;j++){
    //         cout<<ch++;
    // }
    // cout<<endl;
    // }

    ////    Hollow Star pattern

    // int n = 33;

    // for(int i =0;i<n;i++){
    //     cout<<"* ";
    //     for(int j=1;j<n-1;j++){
    //         if(i==0 || i==n-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<"* ";
    //     cout<<endl;
    // }


    ////    INverted STAR PYRAMID PATTERN  

    int st = 4;
    for(int i=0;i<st;i++){
        for(int j=0;j<st;j++){
            if(j<st-(i+1)){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}